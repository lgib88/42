/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:35:57 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/15 16:51:35 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++:
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
