/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:34:55 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 13:17:50 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Checks if dest and src are the same or if num of bytes is 0.
//If so, returns dest pointer, which = src pointer.
//2. Creates unsigned int (idx) = 0 to know how many bytes have been copied.
//3. while loop as long as idx < n (as long as there are bytes to be copied).
//4. First line of while loop uses operator (*) to set value of the byte
//at dest address + value of idx to the value of byte at src address
//+ value of idx.
//5. idx variable incremented by 1, and loop restarts
//until it reaches num of bytes to be copied.
//6. Returns dest pointer.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		idx;

	if (dest == src || !n)
		return (dest);
	idx = 0;
	while (idx < n)
	{
		*((char *)dest + idx) = *((char *)src + idx);
		idx++;
	}
	return (dest);
}
