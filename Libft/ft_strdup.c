/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:20:10 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 15:17:00 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. malloc allocates memory of the size of s1 + 1.
//We add 1 to size to add null termination to string.
//2. Check if allocation is successful, if not return 0.
//3. If OK, ft_memcpy copies string s1 into new string s2.
//4. Return s2.

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
