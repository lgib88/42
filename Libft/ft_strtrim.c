/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:13:47 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 16:57:40 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. ft_strtrim() returns a copy of string given as argument
//without char specified in second argument at beginning or end of string.
//2. ft_strtrim() takes two arguments,
//the string to be trimmed and the set of chars to trim.
//3. Checks if string or set is null, and returns 0 if true.
//4. Checks if string has any chars from the set
//at the beginning and removes them.
//5. Finds length of the string.
//6. Checks if string has any chars from the set at the end and removes them.
//7. Returns copy of the string without the chars specified in second argument
//at beginning or end of string. 

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
