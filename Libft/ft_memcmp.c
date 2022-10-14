/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:50:47 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 12:46:47 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Uses size_t data type to store value of length
//of memory area to be compared.
//size_t data type is used to represent size of an object in bytes.
//It is an unsigned int type.
//2.  Compares n bytes of memory area s1 to memory area s2.
//3.  Returns 0 if memory areas are equal. 
//If not, returns difference between first two differing bytes.
//4.  Stops comparing bytes when first difference is found.
//5.  Returns negative value if first different byte
//in memory area s1 < the corresponding byte in memory area s2.
//6.  Returns positive value if first different byte
//in memory area s1 > the corresponding byte in memory area s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx)
			== *((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx))
				- *((unsigned char *)s2 + idx));
	}
	return (0);
}
