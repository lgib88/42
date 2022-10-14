/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:23:04 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 17:24:07 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Check if argument is lowercase letter.
//2. If true return uppercase letter by substracting 32 to argument.
//3. If false return same argument.

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
