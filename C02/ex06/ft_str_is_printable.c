/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:50:08 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/25 10:54:20 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 32 && str[a] <= 126))
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_printable("ABCDE?340IJJKL"));
	printf("\n%d", ft_str_is_printable("\n\t\fa "));
	return (0);
}*/
