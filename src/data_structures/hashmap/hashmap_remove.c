/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:07:34 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:53:55 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "hashmap_utils.h"

static void	hashmap_rehash_cluster(t_hashmap *hm, size_t start)
{
	void	*key;
	void	*val;

	while (hm->keys[start] != NULL)
	{
		key = hm->keys[start];
		val = hm->vals[start];
		hm->keys[start] = NULL;
		hm->vals[start] = NULL;
		hm->size--;
		hashmap_put(hm, key, val);
		hm->key_type->del(key);
		hm->val_type->del(val);
		start = (start + 1) % hm->capacity;
	}
}

void		hashmap_remove(t_hashmap *hm, const void *key)
{
	size_t	i;

	i = hm->key_type->hash(key, hm->capacity);
	while (hm->key_type->cmp(hm->keys[i], key) != 0)
	{
		if (hm->keys[i] == NULL)
			return ;
		i = (i + 1) % hm->capacity;
	}
	hm->key_type->del(hm->keys[i]);
	hm->val_type->del(hm->vals[i]);
	hm->keys[i] = NULL;
	hm->vals[i] = NULL;
	hm->size--;
	if (hm->capacity > HASHMAP_INIT_CAPACITY &&
		hm->size <= hm->capacity / 8)
		hashmap_shrink(hm);
	else
		hashmap_rehash_cluster(hm, i + 1);
}
