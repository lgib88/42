/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:24:38 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 12:03:08 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Calculates size by multiplying elements (count) by each (size).
//2. Uses malloc() to allocate memory for the array.
//3. Uses ft_memset() to set all the allocated memory to 0.
//4. Returns the allocated memory.

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
