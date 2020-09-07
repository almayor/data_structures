/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:54:21 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:13:12 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

t_union_find	*union_find_new(size_t size)
{
	t_union_find	*uf;
	size_t			i;

	uf = ds_xmalloc(sizeof(t_union_find));
	uf->parent = ds_xcalloc(sizeof(size_t), size);
	uf->nchild = ds_xcalloc(sizeof(size_t), size);
	uf->size = size;
	uf->count = size;
	i = 0;
	while (i < size)
	{
		uf->parent[i] = i;
		uf->nchild[i] = 1;
		i++;
	}
	return (uf);
}
