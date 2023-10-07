/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:55:48 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 16:47:05 by jinhchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int var)
{
	if ((var >= 'a' && var <= 'z') || (var >= 'A' && var <= 'Z') 
		|| (var >= '0' && var <= '9'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	var;

	var = 'a';
	ft_isalnum(var);
	if (ft_isalnum(var) == 1)
		printf("is alnum");
	else
		printf("is not alnum");
	return (0);
}
