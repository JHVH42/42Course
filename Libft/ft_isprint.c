/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:55:27 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 17:07:34 by jinhchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int var)
{
	if (var >= 32 && var <= 126)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	var;

	var = 'a';
	ft_isprint(var);
	if (ft_isprint(var) == 1)
		printf("is print");
	else
		printf("is not print");
	return (0);
}
