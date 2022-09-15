/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:03:08 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/17 16:49:39 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main()
{
	int	col1up;
	int	col2up;
	int	col3up;
	int	col4up;
	int	col1down;
	int	col2down;
	int	col3down;
	int	col4down;
	int	row1left;
	int	row2left;
	int	row3left;
	int	row4left;
	int	row1right;
	int	row2right;
	int	row3right;
	int	row4right;

	int	tab[6][6] =
	{
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 0, 0}
	};
	int	edge = sizeof(tab[0]) / sizeof(int) -1;
	int	a = 0;
	int	b = 0;
	int c = 0;

	printf("%d", tab[a][b]);
	for	(int c = 0; c < edge; ++c) {printf("%d", tab[a][++b]);}
	while(0 < edge)
	{
		for (int c = 0; c < edge; ++c) {printf("%d", tab[++a][b]);}
		for (int c = 0; c < edge; ++c) {printf("%d", tab[a][--b]);}
		--edge;
		for (int c = 0; c < edge; ++c) {printf("%d", tab[--a][b]);}
		for (int c = 0; c < edge; ++c) {printf ("%d", tab[a][--b]);}
		--edge;
	}
	return (0);
}
