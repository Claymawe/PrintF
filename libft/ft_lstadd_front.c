/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrobinso <mrobinso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:37:55 by mrobinso          #+#    #+#             */
/*   Updated: 2021/09/21 12:48:14 by mrobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** adds the element "New" at the beginning of the list.
*/

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new -> next = *alst;
		*alst = new;
	}
}
