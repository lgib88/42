/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:40:44 by lgibert-          #+#    #+#             */
/*   Updated: 2022/07/25 09:37:17 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
//#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int a)
{
	unsigned int	b;

	b = 0;
	while (src[b] != '\0' && b < a)
	{
		dest[b] = src[b];
		b++;
	}
	while (b < a)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Green";
	char	dest[] = "Purple";
	char	dest2[] = "Orange";

	printf("%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest2, src, 3));
	printf("\n%s", ft_strncpy(dest, src, 5));
	printf("\n%s", strncpy(dest2, src, 5));
	printf("\n%s", ft_strncpy (dest, src, 7));
	printf("\n%s", strncpy (dest2, src, 7));
	return (0);
}*/
