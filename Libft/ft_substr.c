/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:56:50 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/12 11:31:31 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s2;
	unsigned int	i;

	s2 = NULL;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) >= start + len)
		s2 = malloc(sizeof(char) * (len + 1));
	else if (len > ft_strlen(s) - start)
	{
		len = ft_strlen(s) - start;
		s2 = malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	}
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}
