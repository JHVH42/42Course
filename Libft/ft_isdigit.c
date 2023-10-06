/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:43:02 by marvin            #+#    #+#             */
/*   Updated: 2023/10/05 21:43:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int var)
{
    if (var >= '0' && var <= '9')
        return (1);
    else
        return (0);
}

int	main(void)
{
    int	var;

    var = '1';
    ft_isdigit(var);
    if (ft_isdigit(var) == 1)
        printf("is digit");
    else
        printf("is not digit");
    return (0);
}