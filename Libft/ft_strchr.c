/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:47:20 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 15:06:11 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. ft_memchr() searches for first occurrence of char c (unsigned char)
//in first n bytes of string pointed to, by argument str.
//2. ft_strlen() calculates length of string pointed to, by argument str.
//3. ft_memchr() searches for first occurrence of char c (unsigned char)
//in first n bytes of string pointed to, by the argument str
//where n is length of the string pointed to, by the argument str, plus 1.
//4. Terminating null character is not included in the count.
//5. If c is found, the function returns pointer to byte located,
//otherwise return NULL.
//6. Returns pointer to first occurrence of char c in string s,
//or NULL if char not found.

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
