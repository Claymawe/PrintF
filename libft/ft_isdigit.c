/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 10:36:37 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/16 11:04:36 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_isdigit() function tests for a digit character.
** this includes the following characters only: '0' - '9'
*/

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}
