/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:19:37 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:47:07 by unite            ###   ########.fr       */
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
			ind = hashmap_index(hm, old_keys[i]);
			hm->keys[ind] = old_keys[i];
			hm->vals[ind] = old_vals[i];
		}
		i++;
	}
}

size_t	hashmap_index(const t_hashmap *hm, const void *key)
{
	size_t	i;

	i = hm->key_type->hash(key, hm->capacity);
	while (hm->keys[i] != NULL)
	{
		if (hm->key_type->cmp(hm->keys[i], key) == 0)
			return (i);
		i = (i + 1) % hm->capacity;
	}
	return (i);
}

int		hashmap_grow(t_hashmap *hm)
{
	void	**old_keys;
	void	**old_vals;
	size_t	old_capacity;

	old_keys = hm->keys;
	old_vals = hm->vals;
	old_capacity = hm->capacity;
	if (!(hm->keys = ft_calloc(sizeof(void *), hm->capacity * 2)) ||
		!(hm->vals = ft_calloc(sizeof(void *), hm->capacity * 2)))
	{
		free(hm->keys);
		hm->keys = old_keys;
		hm->vals = old_vals;
		return (1);
	}
	hm->capacity *= 2;
	hashmap_rehash(hm, old_keys, old_vals, old_capacity);
	free(old_keys);
	free(old_vals);
	return (0);
}

int		hashmap_shrink(t_hashmap *hm)
{
	void	**old_keys;
	void	**old_vals;
	size_t	old_capacity;

	old_keys = hm->keys;
	old_vals = hm->vals;
	old_capacity = hm->capacity;
	if (!(hm->keys = ft_calloc(sizeof(void *), hm->size * 2)) ||
		!(hm->vals = ft_calloc(sizeof(void *), hm->size * 2)))
	{
		free(hm->keys);
		hm->keys = old_keys;
		hm->vals = old_vals;
		return (1);
	}
	hm->capacity = hm->size * 2;
	hashmap_rehash(hm, old_keys, old_vals, old_capacity);
	free(old_keys);
	free(old_vals);
	return (0);
}
