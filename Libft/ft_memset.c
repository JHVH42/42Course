/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:55:15 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 17:27:45 by jinhchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	*ft_memset(void *str, int var, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	*ptr = (unsigned char *)str;
	while (i < len)
	{
		ptr[i] = (unsigned char)var;
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[50] = "This is string.h library function";
	printf("\nBefore memset(): %s\n", str);
	ft_memset(str + 5, '.', 10);
	printf("After memset():  %s\n", str);
	return (0);
}
*/
