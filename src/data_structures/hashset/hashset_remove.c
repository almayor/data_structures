/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:59:47 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:57:00 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

static void	hashset_rehash_cluster(t_hashset *hs, size_t start)
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
}

void		hashset_remove(t_hashset *hs, const void *val)
{
	size_t	i;

	i = hs->type->hash(val, hs->capacity);
	while (hs->type->cmp(hs->vals[i], val) != 0)
	{
		if (hs->vals[i] == NULL)
			return ;
		i = (i + 1) % hs->capacity;
	}
	hs->type->del(hs->vals[i]);
	hs->vals[i] = NULL;
	hs->size--;
	if (hs->capacity > HASHSET_INIT_CAPACITY &&
		hs->size <= hs->capacity / 8)
		hashset_shrink(hs);
	else
		hashset_rehash_cluster(hs, i + 1);
}

