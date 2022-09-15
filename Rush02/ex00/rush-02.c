/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:04:23 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/23 19:33:25 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	return (number * sign);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 2)
	{
		unsigned int	number;
		number = ft_atoi(argv[1]);

		if (number < 0 || number > 4294967295)
		{
			ft_putstr("Error\n");
		}

		// Deconstruir el numero
		

		//Abrir el dictionnario

		fd = open("numbers.dict", O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("Dict Error\n");
		}

		//Leer linea por linea con fget


	}
/*	else if (argc == 3)
	{

	}*/
	
}
