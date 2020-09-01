/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find_union.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:00:39 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 22:09:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

int		union_find_union(t_union_find *uf, size_t p, size_t q)
{
	size_t	root_p;
	size_t	root_q;

	if (p >= uf->size || q >= uf->size)
		return (1);
	root_p = union_find_find(uf, p);
	root_q = union_find_find(uf, q);
	if (root_p == root_q)
		return (0);
	if (uf->nchild[root_p] > uf->nchild[root_q])
	{
		uf->parent[root_q] = root_p;
		uf->nchild[root_p] += uf->nchild[q];
	}
	else
	{
		uf->parent[root_p] = root_q;
		uf->nchild[root_q] += uf->nchild[p];
	}
	uf->count--;
	return (0);
}
