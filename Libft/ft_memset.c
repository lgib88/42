/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:07:23 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 13:27:14 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Declare ft_memset with three parameters, str, c and n.
//It will return a pointer to a memory area.
//2. Declare variable idx of type size_t which will
//iterate through the memory area.
//3. Initialize idx to 0.
//4. Enter while loop where we iterate through
//the memory area and fill it with char c.
//5. Return pointer to memory area str

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		*((unsigned char *)str + idx) = c;
		idx++;
	}
	return (str);
}
