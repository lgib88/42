/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:56:27 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/12 09:30:03 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Check if n = 0. If true return 0.
//2. Declare variable idx and initialize to 0.
//3. while loop that will run while idx < n.
//4. Check if s1[idx] not = 0 and if s1[idx] = s2[idx].
//If true enter another while loop.
//5. Check if s1[idx] not = 0, if s1[idx] = s2[idx] and if idx < n.
//If true increment idx by 1.
//6. Return difference between s1[idx] and s2[idx].
//7. Return 0

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		idx;

	if (n == 0)
		return (0);
	idx = 0;
	while (idx < n)
	{
		if (s1[idx] && s1[idx] == s2[idx])
		{
			while (s1[idx] && s1[idx] == s2[idx] && idx < n)
				idx++;
		}
		else
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
	}
	return (0);
}
