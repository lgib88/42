/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:20:16 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/20 18:10:26 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab [i];
				tab [i] = tab [i + 1];
				tab [i + 1] = swap;
			}
			i++;
		}
		size--;
	}
}
//
//int	main(void)
//{
//	int	tab[6] = {2, 1, 4, 3, 6, 5};
//	int	size = 6;
//
//	ft_sort_int_tab(tab, size);
//	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
//	return (0);
//}
