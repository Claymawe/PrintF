/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:45:39 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/28 10:56:24 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The function copies bytes from string src to string dst.
** the two strings may overlap but the copy is always done in a 
non-destructive manner.
*/

void	*ft_memmove(char *dst, char *src, size_t len)
{
	int		i;

	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			dst[i] = src[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
