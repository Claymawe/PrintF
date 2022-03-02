/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 10:37:29 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/10 10:45:26 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function compares byte strings against eachother, both strings are
** assumed to be n bytes long, returns 0 if the first two strings are the same
** otherwize returns the difference between both bytes.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_str;
	unsigned char	*s2_str;

	s1_str = (unsigned char *)s1;
	s2_str = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_str[i] != s2_str[i])
		{
			return (s1_str[i] - s2_str[i]);
		}
		i++;
	}
	return (0);
}
