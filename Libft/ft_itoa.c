/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:21:40 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 12:27:35 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. If num is < 0, add 1 to size to add '-'.
//2. Start loop to divide num by 10 until =  0.
//3. Divide num by 10 and increase size by 1.
//4. If number is 0, break loop and return size.

size_t	ft_itoa_nsize(long number)
{
	size_t	size;

	if (number < 0)
		size = 1;
	else
		size = 0;
	while (1)
	{
		number /= 10;
		size++;
		if (number == 0)
			break ;
	}
	return (size);
}

//1. ft_itoa_nsize() to determine size of the array we need
//to store the string of given number.
//2. Buffer for string representation of the number.
//3. If num is <0, first char of string is set to '-' 
//and num is multiplied by -1 to make it positive.
//4. Last character of string set to \0.
//5. String filled with the digits of the num.
//6. String representation of the num is returned.

char	*ft_itoa(int n)
{
	long	number;
	char	*array;
	size_t	size;

	number = n;
	size = ft_itoa_nsize(n);
	array = malloc((size + 1) * sizeof(char));
	if (!array)
		return (NULL);
	if (number < 0)
	{
		array[0] = '-';
		number *= -1;
	}
	array[size] = '\0';
	while (1)
	{
		array[size - 1] = (number % 10) + '0';
		number /= 10;
		size--;
		if (number == 0)
			break ;
	}
	return (array);
}
