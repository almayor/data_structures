/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_unlink.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 22:16:54 by unite             #+#    #+#             */
/*   Updated: 2020/09/01 19:33:43 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	*list_unlink_inner(t_list *alst, size_t index)
{
	t_link	*link;
	void	*content;

	if (index < alst->size / 2)
	{
		link = alst->head;
		while (index-- > 0)
			link = link->next;
	}
	else
	{
		link = alst->tail;
		while (++index < alst->size)
			link = link->prev;
	}
	link->prev->next = link->next;
	link->next->prev = link->prev;
	content = link->content;
	free(link);
	alst->size--;
	return (content);
}

void	*list_unlink(t_list *alst, size_t index)
{
	if (index >= alst->size)
	{
		errno = EINVAL;
		return (NULL);
	}
	else if (index == 0)
		return (list_unlink_first(alst));
	else if (index + 1 == alst->size)
		return (list_unlink_last(alst));
	else
		return (list_unlink_inner(alst, index));
}
