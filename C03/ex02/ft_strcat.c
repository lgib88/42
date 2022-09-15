/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:11:11 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/28 15:04:41 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Barcelona";
	char	dest[] = "Hello ";

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
