/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_first.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:49:05 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:02:48 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_add_first(t_list *alst, const void *data)
{
	t_link	*link;

	link = ds_xcalloc(sizeof(t_link), 1);
	link->content = alst->type->copy(data);
	link->next = alst->head;
	alst->size++;
	alst->head = link;
	if (alst->size == 1)
		alst->tail = link;
	else
		alst->head->next->prev = alst->head;
}
