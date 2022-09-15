/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 09:17:18 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/20 18:18:04 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

//int	main(void)
//{
//	int	a;
//	int	b;
//	int	x;
//	int	y;
//	int	*div;
//	int	*mod;
//
//	a = 10;
//	b = 5;
//	ft_div_mod(a, b, div, mod);
//	printf("%d\n", x);
//	printf("%d", y);
//	return (0);
//}
