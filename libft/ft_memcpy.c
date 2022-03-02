/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:31:12 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/28 11:23:51 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The funtion copies n bytes from memory area src to memory area dst
** if dst and src overlap behaviour is undefined
*/

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int	i;

	if (n == '0' || (src == NULL && dst == NULL))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
