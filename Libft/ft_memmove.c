/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 14:09:37 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 13:23:17 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Check if dst pointer = src pointer, if true return dest pointer.
//2. Check if value of n is 0, if true return dest pointer.
//3. Check if dest pointer < src pointer, if true 
//copy the bytes of src pointer to dest pointer in order.
//4. Check if dest pointer > src pointer, if true
//copy the bytes of src pointer to dest pointer in reverse order.
//5. Return dest pointer.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		idx;

	if (dest == src || !n)
		return (dest);
	idx = 0;
	if (dest < src)
	{
		while (idx < n)
		{
			*((char *)dest + idx) = *((char *)src + idx);
			idx++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}
