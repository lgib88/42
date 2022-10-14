/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:56:06 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 14:10:35 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Check if int < 0. It true convert to positive by multiplying by '-1'.
//Convert to unsigned int and add '-' at the beggining.
//2. If num > 0, convert to unsigned int.
//3. If num < 10, recursively call function again
//with num / 10 to print num in reverse order.
//4. Print last digit (first digit in the reversed number) by % 10.
//Then add 48 to get ASCII value of digit, then convert to char and print.

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
