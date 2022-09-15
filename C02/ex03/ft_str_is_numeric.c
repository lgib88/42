/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:07:24 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/25 10:21:34 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (!(str[a] >= 48 && str [a] <= 57))
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
	printf("%d", ft_str_is_numeric("012465489651"));
	printf("\n%d", ft_str_is_numeric("-a 54kvxpr_lh"));
}*/
