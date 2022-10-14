/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:10:24 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/12 09:10:40 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Copies up to size - 1 characters from NUL-terminated string src to dst,
//NUL-terminating result.
//2. Returns length of string tried to create (length of src)
//3. Index variable is used to count the num of chars in string src.
//4. Count variable is used to count the num of chars in string dst.
//5. while loop counts num of chars in string src.
//6. while loop counts num of chars in string dst and stores in string dst.
//7. while loop stops when count variable = size - 1.
//8. while loop stops when end of string src is reached.
//9. while loop stops when end of string dst is reached.
//10. while loop stops when src[count] = '\0'.
//11. while loop stops when dst[count] = '\0'.
//12. if statement checks if dstsize = 0.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (src[index] != '\0')
		index++;
	if (dstsize != 0)
	{
		while (src[count] != '\0' && count < (dstsize - 1))
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (index);
}
