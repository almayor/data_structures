/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:54:21 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 22:09:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

t_union_find	*union_find_new(size_t size)
{
	t_union_find	*uf;
	size_t			i;

	if (!(uf = malloc(sizeof(t_union_find))) ||
		!(uf->parent = ft_calloc(sizeof(size_t), size)) ||
		!(uf->nchild = ft_calloc(sizeof(size_t), size)))
	{
		union_find_delete(uf);
		return (NULL);
	}
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
