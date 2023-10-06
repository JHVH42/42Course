/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:55:38 by marvin            #+#    #+#             */
/*   Updated: 2023/10/06 23:55:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(int var)
{
    if (var >= 0 && var <= 127)
        return (1);
    else
        return (0);      
}

int main(void)
{
    int var;

    var = 'a';
    ft_isascii(var);
    if (ft_isascii(var) == 1)
        printf("is ascii");
    else
        printf("is not ascii");
    return (0);
}