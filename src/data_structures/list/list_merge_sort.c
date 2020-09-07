/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_merge_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 22:35:24 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:01:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static t_link	*link_jump(t_list *alst, t_link *start, size_t n)
{
	t_link	*end;

	end = start;
	while (n-- > 0)
		end = end->next;
	return (end);
}

static t_link	*links_sorted_merge(t_list *alst, t_link *l, t_link *m)
{
	t_link	*result;
	t_link	*included;

	if (!l)
		return (m);
	if (!m)
		return (l);
	if (alst->type->cmp(l->content, m->content) > 0)
	{
		result = m;
		result->next = links_sorted_merge(alst, m->next, l);
	}
	else
	{
		result = l;
		result->next = links_sorted_merge(alst, l->next, m);
	}
	return (result);
}

static t_link	*link_merge_sort_recur(t_list *alst, t_link *start, size_t size)
{
	t_link	*middle;

	if (size == 1)
		return (start);
	middle = link_jump(alst, start, size / 2);
	middle->prev->next = NULL;
	start = link_merge_sort_recur(alst, start, size / 2);
	middle = link_merge_sort_recur(alst, middle, size - size / 2);
	return (links_sorted_merge(alst, start, middle));
}

static void		list_fix_backlinks(t_list *alst, t_link *start)
{
	t_link	*link;

	link = start;
	while (link->next)
	{
		link->next->prev = link;
		link = link->next;
	}
	alst->head = start;
	alst->tail = link;
}

void			list_merge_sort(t_list *alst)
{
	t_link	*start;

	if (alst->type->cmp == NULL)
		ds_exit_set(ENOTSUP);
	if (alst->head == NULL)
		return ;
	start = link_merge_sort_recur(alst, alst->head, alst->size);
	list_fix_backlinks(alst, start);
}
