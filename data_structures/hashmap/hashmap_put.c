/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:47:57 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 02:00:36 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "hashmap_utils.h"

int	hashmap_put(t_hashmap *hm, const void *key, const void *val)
{
	size_t	i;

	if (hm->size >= hm->capacity && hashmap_grow(hm))
		return (1);
	i = hashmap_index(hm, key);
	if (hm->keys[i] == NULL)
		hm->keys[i] = hm->key_type->copy(key);
	else
		hm->val_type->del(hm->vals[i]);
	hm->vals[i] = hm->val_type->copy(val);
	hm->size++;
	return (0);
}
