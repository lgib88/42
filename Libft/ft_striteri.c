/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:22:14 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/11 15:46:22 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Iterates through string s passed as argument
//and passes index and char to function f.
//Each char is passed by address to f to be modified if needed.
//2. To modify the string, function is declared with void type.
//3. Returns nothing (void).
//4. Needs a string (s) and function pointer (f).
//5. Iterates through string and passes index and char to function f.
//6. Checks if string s or function pointer f = null.
//If true, function returns without doing anything.
//7. Declares int variable i and initializes to 0.
//Variable used to store index of string.
//8. The function iterates through the string
//until it reaches the null-terminating character.
//At each iteration, passes the index  and char to function f.
//9. The function increments the index variable

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
