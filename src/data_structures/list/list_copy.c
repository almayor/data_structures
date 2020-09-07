/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 10:07:52 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:02:11 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list		*list_copy(const t_list *alst)
{
	t_list	*copy;
	t_link	*link;

	copy = list_new(alst->type);
	link = alst->head;
	while (link)
	{
		list_add_last(copy, link->content);
		link = link->next;
	}
	return (copy);
}
