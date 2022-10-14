/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:27:10 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 16:02:43 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. ft_strlcat() is a string library function to concatenate two strings.
//2. Takes three parameters: dst string, src string, and size of dest string.
//3. Appends src string to dst string.
//4. Returns length of new string.
//5. Returns length of new string, but not more than size of dst string.
//6. Copies terminating null byte from src string to dst string.
//7. Does not return anything if size of dst string = 0.
//8. Returns length of src string if length of src string > size of dst string.
//9. Does not return anything if length of src string > size of dst string.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dest;
	char	*source;
	size_t	dst_length;
	size_t	remaing;

	dest = dst;
	source = (char *)src;
	remaing = dstsize;
	while (remaing-- != 0 && *dest != '\0')
		dest++;
	dst_length = dest - dst;
	remaing = dstsize - dst_length;
	if (remaing == 0)
		return (dst_length + ft_strlen(source));
	while (*source != '\0')
	{
		if (remaing > 1)
		{
			*dest++ = *source;
			remaing--;
		}
		source++;
	}
	*dest = '\0';
	return (dst_length + (source - src));
}
