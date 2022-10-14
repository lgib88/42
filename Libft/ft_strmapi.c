/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 10:33:31 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 16:17:08 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Create new string with same length as original string.
//2. Check if there is a string, if there is a function,
//and if the string is successfully copied.
//3. Create a counter and a loop to iterate through the string.
//4. Apply function to each char in the string.
//5. Return new string

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
