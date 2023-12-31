/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinhchen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:23:31 by jinhchen          #+#    #+#             */
/*   Updated: 2023/10/07 16:54:26 by jinhchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int var)
{
	if ((var >= 'A' && var <= 'Z') || (var >= 'a' && var <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	var;

	var = 'a';
	ft_isalpha(var);
	if (ft_isalpha(var) == 1)
		printf("is alpha");
	else
		printf("is not alpha");
	return (0);
}
