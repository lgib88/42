/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:46:30 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 14:19:29 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Takes two parameters: str to print and file descriptor.
//2. We use the parameter fd to decide where to print.
//3. If str is not NULL, iterate it and use
//ft_putchar_fd to print each character.
//4. ft_putchar_fd takes two parameters: char to print and the file descriptor.
//5. Use parameter fd to decide where to print.
//6. Check if char is printable, if false print a dot, if true print char.
//7. ft_putnbr_base takes three parameters: int to print,
//the base and the file descriptor.
//8. Use parameter fd to decide where to print.
//9. We check if int < 0, if true print a minus sign.

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
