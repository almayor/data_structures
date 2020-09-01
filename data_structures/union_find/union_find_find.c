/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find_find.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:58:28 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 22:00:32 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

ssize_t	union_find_find(const t_union_find *uf, size_t p)
{
	if (p >= uf->size)
	{
		errno = EINVAL;
		return (-1);
	}
	while (p != uf->parent[p])
	{
		uf->parent[p] = uf->parent[uf->parent[p]];
		p = uf->parent[p];
	}
	return (p);
}
