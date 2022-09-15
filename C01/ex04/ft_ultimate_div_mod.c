/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:22:40 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/20 15:02:15 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
//
//int	main(void)
//{
//	int	x;
//	int	y;
//
//	x = 10;
//	y = 3;
//	ft_ultimate_div_mod(&x, &y);
//	printf("%d | %d", x, y);
//	return (0);
//}
