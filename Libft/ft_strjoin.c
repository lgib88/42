/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:53:09 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 15:48:37 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. ft_strjoin() allocates (with malloc(3)) and returns new string,
// which is the result of the concatenation of ’s1’ and ’s2’.
//2. If allocation fails, returns NULL.
//3. Returns a pointer to new string.

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;

	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !new_str)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		new_str[i++] = s2[j++];
	new_str[i] = '\0';
	return (new_str);
}
