/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:27:04 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 13:29:48 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Takes char variable and int variable as parameters.
//2. Uses write function to print char variable to the
//file descriptor that int variable represents.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
