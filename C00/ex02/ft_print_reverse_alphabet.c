/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_aplhabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 16:25:32 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/15 16:49:18 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 123;
	while (--c >= 97)
		write(1, &c, 1);
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
