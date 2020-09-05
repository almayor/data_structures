/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:35:49 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 19:11:35 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

t_hashmap	*hashmap_new(const t_type *key_type, const t_type *val_type)
{
	t_hashmap		*hm;

	if (key_type->hash == NULL)
	{
		errno = EINVAL;
		return (NULL);
	}
	if (!(hm = ds_calloc(sizeof(t_hashmap), 1)) ||
		!(hm->keys = ds_calloc(sizeof(void *), HASHMAP_INIT_CAPACITY)) ||
		!(hm->vals = ds_calloc(sizeof(void *), HASHMAP_INIT_CAPACITY)))
	{
		hashmap_delete(hm);
		return (NULL);
	}
	hm->val_type = val_type;
	hm->key_type = key_type;
	hm->capacity = HASHMAP_INIT_CAPACITY;
	return (hm);
}
