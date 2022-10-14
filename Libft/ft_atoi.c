/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:57:06 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 11:14:20 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Multiply (n) by 10 and add the digit (s).
//2. Multiply result by sign to process negative numbers.
//3. Compare result with min and max integers.
//4. If < min number, return 0.
//5. If > max possible number, return -1.
//6. If result between min and max, return 1.

static int	limit(long long n, const char *s, int sign)
{
	long long	limit_min;
	long long	limit_max;

	limit_min = ((n * 10) + (*s - '0')) * sign;
	if (limit_min < -2147483648)
		return (0);
	limit_max = ((n * 10) + (*s - '0')) * sign;
	if (limit_max > 2147483647)
		return (-1);
	return (1);
}

//1. ft_atoi() takes a string and converts it to an integer.
//2. Check if string is empty. If it is, return 0.
//3. Check the sign by checking if first character is '+' or '-'.
//4. Check if the string contains only numbers.
//5. Loop through the string and convert it to integer.
//6. Check if number is out of range.
//7. Return the number.

int	ft_atoi(const char *str)
{
	size_t		i;
	int			sign;
	long int	result;
	int			limit_test;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_isdigit(str[i]))
	{
		limit_test = limit(result, str, sign);
		if (limit_test == 0 || limit_test == -1)
			return (limit_test);
		result = ((result * 10) + str[i] - '0');
		i++;
	}
	return (result * sign);
}
