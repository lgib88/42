/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:29:30 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/27 14:54:55 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	int				b;

	a = 0;
	b = ft_strlen(dest);
	while ((src[a] != '\0') && (a < nb))
	{
		dest[b] = src[a];
		b++;
		a++;
	}
	dest[b] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Barcelona";
	char	dest[] = "42";

	printf("%s", ft_strncat(dest, src, 7));
	return (0);
}*/
