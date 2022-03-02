/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 09:48:47 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/28 11:40:31 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc(3) and returns an array of strings obtained by
** splitting s using the character c as a delimitier.
*/

static int	count_words(char *str, char c)
{
	int		i;
	int		trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char		*word;
	int			i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

void	ft_variables(int i, size_t j, int index)
{
	i = 0;
	j = 0;
	index = -1;
}

char	**ft_split(const char *s, char c)
{
	int			i;
	size_t		j;
	int			index;
	char		**split;

	if (!s)
		return (NULL);
	split = malloc((count_words((char *)s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	ft_variables(i = 0, j = 0, index = -1);
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen((char *)s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
