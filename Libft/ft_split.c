/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgibert- <lgibert-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:16:33 by lgibert-          #+#    #+#             */
/*   Updated: 2022/10/12 09:53:08 by lgibert-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Start with a counter that will count words.
//2. Start at the beginning of string advance until the end.
//3. Skip any char that is the delimiter
//until we find a character that is not the delimiter.
//4. If we find a char that is not the delimiter, increment counter.
//5. Skip any char that is not delimiter
//until finds char that is the delimiter.
//6. Repeat step 3-5 until end of the string.
//7. Return the number of words

static int	ft_countwords(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

//1. ft_wordlen() takes two parameters:
//s = string to be checked, c = char to be checked for.
//2. Declare two variables i and len used to iterate through string, 
//len used to count length of the word.
//3. Set i to zero, and ++i until finds first char
//that is not the char we are checking for. 
//4. Increment i and len until finds the next char
//that is the char we are checking for. 
//5. Return len, which contains length of word.
//6. Function called in ft_split() with parameters s and c

static int	ft_wordlen(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

//1. Rakes two arguments: address of array
//to be freed and number of elements in array.
//2. In a loop, free each element of array, starting from last element.
//3. Free the array itself.

char	**ft_mallocerror(char **array, int i)
{
	while (i >= 0)
	{
		free(array[i]);
		--i;
	}
	free(array);
	return (NULL);
}

//1. ft_countwords to get number of words in array.
//2. Use malloc to allocate memory for array.
//3. while loop to iterate through the array.
//4. ft_substr to get substring of string s,
//from index j to ending at the index of the next c.
//5. Increment j by length of the word.
//6. Increment i.
//7. Add null terminator to array.
//8. Return the array

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	array = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_countwords(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		array[i] = ft_substr(s, j, ft_wordlen(&s[j], c));
		if (!array[i])
			return (ft_mallocerror(array, i));
		j += ft_wordlen(&s[j], c);
		++i;
	}
	array[i] = 0;
	return (array);
}
