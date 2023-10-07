/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:51:24 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 15:51:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == '\0')
		return (0);
	while (i < n - 1 && (s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdeF";
	int	n = 5;
	int	a;

	a = ft_strncmp(str1, str2, n);
	if (a > 0)
		printf("str1 is greatter than str2.\n");
	else if (a < 0)
		printf("str1 is less than str2.\n");
	else
		printf("str1 is equal to str2.\n");
	printf("\nresult: %d", a);
	return (0);
}
