/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:19:37 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:53:05 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap_utils.h"

static void	hashmap_rehash(t_hashmap *hm, void **old_keys, void **old_vals,
							size_t old_capacity)
{
	size_t	i;
	size_t	ind;

	i = 0;
	while (i < old_capacity)
	{
		if (old_keys[i] != NULL)
		{
			hashmap_put(hm, old_keys[i], old_vals[i]);
			hm->key_type->del(old_keys[i]);
			hm->val_type->del(old_vals[i]);
		}
		i++;
	}
	free(old_keys);
	free(old_vals);
}

void		hashmap_grow(t_hashmap *hm)
{
	void	**old_keys;
	void	**old_vals;
	size_t	old_capacity;

	old_keys = hm->keys;
	old_vals = hm->vals;
	old_capacity = hm->capacity;
	hm->keys = ds_xcalloc(sizeof(void *), hm->capacity * 2);
	hm->vals = ds_xcalloc(sizeof(void *), hm->capacity * 2);
	hm->capacity *= 2;
	hashmap_rehash(hm, old_keys, old_vals, old_capacity);
	free(old_keys);
	free(old_vals);
}

void		hashmap_shrink(t_hashmap *hm)
{
	void	**old_keys;
	void	**old_vals;
	size_t	old_capacity;

	old_keys = hm->keys;
	old_vals = hm->vals;
	old_capacity = hm->capacity;
	hm->keys = ds_xcalloc(sizeof(void *), hm->size * 2);
	hm->vals = ds_xcalloc(sizeof(void *), hm->size * 2);
	hm->capacity = hm->size * 2;
	hashmap_rehash(hm, old_keys, old_vals, old_capacity);
	free(old_keys);
	free(old_vals);
}
