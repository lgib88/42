/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:46:17 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/20 14:56:24 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
//
//int	main(void)
//{
//	int	x;
//	int	y;
//
//	x = 5;
//	y = 9;
//	ft_swap(&x, &y);
//	printf("%d \n", x);
//	printf("%d", y);
//	return (0);
//}
