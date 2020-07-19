/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 01:15:23 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 01:16:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_print(const t_list *alst)
{
	t_link	*link;

	link = alst->head;
	while (link)
	{
		alst->type->print(link->content);
		if (link->next)
			ft_putstr(" -> ");
		link = link->next;
	}
	ft_putchar('\n');
}
