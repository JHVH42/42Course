/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:13:07 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 15:13:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

/// @brief 把字符串(char)转换为整数(int)
/// @param str
/// @return

int	ft_atoi(char *str)
{
	int	i;
	int	sinal;
	int	result;

	i = 0;
	sinal = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sinal = -sinal;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * sinal);
}

int main(void)
{
	char str[] = "   -1234";
	int res;

	res = ft_atoi(str);
	printf("%d\n", res);
	return (0);
}
