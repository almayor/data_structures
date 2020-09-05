/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:46:20 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 19:11:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_new(const t_type *type)
{
	t_list	*list;

	if (!(list = ds_calloc(sizeof(t_list), 1)))
		return (NULL);
	list->type = type;
	return (list);
}
