/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:07:34 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:47:29 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "hashmap_utils.h"

int	hashmap_remove(t_hashmap *hm, const void *key)
{
	size_t	i;

	i = hashmap_index(hm, key);
	if (hm->keys[i] == NULL)
		return (1);
	hm->key_type->del(hm->keys[i]);
	hm->val_type->del(hm->vals[i]);
	hm->keys[i] = NULL;
	hm->vals[i] = NULL;
	hm->size--;
	if (hm->capacity > HASHMAP_INIT_CAPACITY &&
		hm->size <= hm->capacity / 4 &&
		hashmap_shrink(hm))
		return (1);
	return (0);
}
