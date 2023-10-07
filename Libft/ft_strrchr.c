/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:53:44 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 18:53:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
	char *ptr;
	char *last;

	ptr = (char *)str;
	last = NULL;
	while (*ptr)
	{
		if (*ptr == c)
			last = ptr;
		ptr++;
	}
	if (c == '\0')
		return (ptr);
	return (last);
}

int main(void)
{
	char str[50] = "Hello World";
	int c = 'o';

	printf("ft_strrchr: %s\n", ft_strrchr(str, c));
	printf("strrchr: %s\n", strrchr(str, c));
	return (0);
}
