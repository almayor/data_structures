/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_first.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:00:12 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:04:10 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	*list_remove_first(t_list *alst)
{
	t_link	*tmp;
	void	*content;

	if (alst->size == 0)
		return (NULL);
	content = alst->head->content;
	tmp = alst->head;
	alst->head = alst->head->next;
	free(tmp);
	alst->size--;
	if (alst->size == 0)
		alst->tail = NULL;
	else
		alst->head->prev = NULL;
	return (content);
}