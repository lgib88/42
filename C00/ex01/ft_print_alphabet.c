/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:45:53 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/19 13:50:49 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (++c <= 122)
	{
		write (1, &c, 1);
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
