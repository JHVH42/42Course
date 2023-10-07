/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:56:30 by marvin            #+#    #+#             */
/*   Updated: 2023/10/07 18:56:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/// @brief  The strnstr() function locates the first occurrence of the null-terminated string to_find in the string str, where not more than len characters are searched.  Characters that appear after a `\0' character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.
/// @param str
/// @param to_find
/// @param len
/// @return
char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && i + j < len)
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (NULL);
}

int		main(void)
{
	char	str[50] = "Hello World";
	char	to_find[50] = "World";
	size_t	len = 5;

	printf("ft_strnstr: %s\n", ft_strnstr(str, to_find, len));
	printf("strnstr: %s\n", strnstr(str, to_find, len));
	return (0);
}
