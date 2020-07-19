/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:00:19 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:07:59 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	*list_remove_last(t_list *alst)
{
	t_link	*tmp;
	void	*content;

	if (alst->size == 0)
		return (NULL);
	content = alst->tail->content;
	tmp = alst->tail;
	alst->tail = alst->tail->prev;
	free(tmp);
	alst->size--;
	if (alst->size == 0)
		alst->head = NULL;
	else
		alst->tail->next = NULL;
	return (content);
}
