/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:49:30 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/10 10:58:14 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** the function locates the furst occurrence of the null-terminated string
** in the null-terminated string haystack where there is no more than len 
** characters are searched.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*phaystack;
	size_t	letters_left;
	size_t	needle_len;
	size_t	i;

	phaystack = (char *)haystack;
	if (needle[0] == '\0')
		return (phaystack);
	i = 0;
	letters_left = len;
	needle_len = (size_t)ft_strlen(needle);
	while (*phaystack && letters_left >= needle_len)
	{
		if (*phaystack == *needle)
		{
			if (ft_strncmp(needle, phaystack, needle_len) == 0)
				return (phaystack);
		}
		i++;
		letters_left--;
		phaystack++;
	}
	return (NULL);
}
