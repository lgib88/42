/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:38:30 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/16 12:05:39 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "rush01.h"

int			column_is_valid(char grid[SIZE][SIZE],t_params *params, int x)
{
	int		i;
	int		max_size;
	int		views;

	max_size = 0;
	views = 0;
	i = -1;
	while	(++i < SIZE)
	{
		views += grid[i][x] > max_size;
		max_size = 
