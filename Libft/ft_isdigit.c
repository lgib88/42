/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:54:23 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 12:16:16 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Checks if the passed char is num: if >= '0' and <= '9' returns 1.
//2. If char is not a num, returns 0. 

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
