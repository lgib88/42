/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:14:18 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 16:49:02 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. If string is empty return the string itself.
//2. Get length of string to find.
//3. Iterate through the string,
//if length of string < length of the string to find, stop.
//4. If first letter of string = first letter of string to find
//and rest of the string = string to find, return the string.
//5. If false return NULL

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		position;

	if (*to_find == '\0')
		return ((char *)str);
	position = ft_strlen((char *)to_find);
	while (*str != '\0' && len-- >= position)
	{
		if (*str == *to_find && ft_memcmp(str, to_find, position) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
