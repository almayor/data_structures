/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:49:05 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 19:11:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	list_add_last(t_list *alst, const void *data)
{
	t_link	*link;

	if (!(link = ds_calloc(sizeof(t_link), 1)) ||
		!(link->content = alst->type->copy(data)))
	{
		free(link);
		return (1);
	}
	link->prev = alst->tail;
	alst->size++;
	alst->tail = link;
	if (alst->size == 1)
		alst->head = link;
	else
		alst->tail->prev->next = link;
	return (0);
}
