/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find_find.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:58:28 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:13:31 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

size_t	union_find_find(const t_union_find *uf, size_t p)
{
	if (p >= uf->size)
		ds_exit_set(EINVAL);
	while (p != uf->parent[p])
	{
		uf->parent[p] = uf->parent[uf->parent[p]];
		p = uf->parent[p];
	}
	return (p);
}
