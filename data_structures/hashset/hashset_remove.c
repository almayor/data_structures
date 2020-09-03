/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:59:47 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 23:27:57 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

static int	hashset_rehash_cluster(t_hashset *hs, size_t start)
{
	void	*val;

	while (hs->vals[start] != NULL)
	{
		val = hs->vals[start];
		hs->vals[start] = NULL;
		hs->size--;
		hashset_put(hs, val);
		hs->type->del(val);
		start = (start + 1) % hs->capacity;
	}
	return (0);
}

int			hashset_remove(t_hashset *hs, const void *val)
{
	size_t	i;

	i = hs->type->hash(val, hs->capacity);
	while (hs->type->cmp(hs->vals[i], val) != 0)
	{
		if (hs->vals[i] == NULL)
			return (0);
		i = (i + 1) % hs->capacity;
	}
	hs->type->del(hs->vals[i]);
	hs->vals[i] = NULL;
	hs->size--;
	if (hs->capacity > HASHSET_INIT_CAPACITY &&
		hs->size <= hs->capacity / 8)
		return (hashset_shrink(hs));
	else
		return (hashset_rehash_cluster(hs, i + 1));
}

