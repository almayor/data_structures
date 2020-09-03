/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_delete.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:14:36 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 22:33:33 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_delete(t_list *alst)
{
	if (alst == NULL)
		return ;
	while (alst->size)
		list_remove_first(alst);
	free(alst);
}
