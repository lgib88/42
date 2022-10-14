/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:07:48 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 12:33:00 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. ft_bzero() takes two arguments: a pointer to a "str"
//and number of bytes to fill with zero "n".
//2. The function calls ft_memset() to set the first "n" bytes
//of the memory area pointed to by "str" to zero.

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}
