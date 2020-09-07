/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:47:57 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:54:15 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "hashmap_utils.h"

void	hashmap_put(t_hashmap *hm, const void *key, const void *val)
{
	size_t	i;

	i = hm->key_type->hash(key, hm->capacity);
	while (hm->keys[i] != NULL)
	{
		if (hm->key_type->cmp(hm->keys[i], key) == 0)
		{
			hm->val_type->del(hm->vals[i]);
			hm->vals[i] = hm->val_type->copy(val);
			return ;
		}
		i = (i + 1) % hm->capacity;
	}
	hm->keys[i] = hm->key_type->copy(key);
	hm->vals[i] = hm->val_type->copy(val);
	hm->size++;
	if (hm->size >= hm->capacity / 2)
		hashmap_grow(hm);
}
