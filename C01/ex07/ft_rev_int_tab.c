/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:12:25 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/26 18:13:26 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
//
//int	main(void)
//{
//	int	size;
//	int	tab[] = {0, 1, 2, 3, 4};
//
//	size = 5;
//	ft_rev_int_tab(tab, size);
//	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
//	return (0);
//}
