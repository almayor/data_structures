/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_peek.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 23:15:24 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 23:17:31 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	*list_peek(const t_list *alst, size_t index)
{
	t_link	*link;

	if (index >= alst->size)
	{
		errno = EINVAL;
		return (NULL);
	}
	link = alst->head;
	while (index-- > 0)
		link = link->next;
	return (link->content);
}
