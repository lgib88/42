/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:30:55 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 12:32:47 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Searches for first unsigned char c
//in the first n bytes of the string, by the argument s.
//2. memchr() returns pointer to the byte located
//or NULL if no byte exists.
//3. ft_memchr() returns a pointer to the byte located
//or NULL if no byte exists.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s + idx) == (unsigned char)c)
			return ((void *)s + idx);
		idx++;
	}
	return (NULL);
}
