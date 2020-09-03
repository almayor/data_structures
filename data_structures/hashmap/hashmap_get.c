/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:59:42 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 23:29:43 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "hashmap_utils.h"

void	*hashmap_get(const t_hashmap *hm, const void *key)
{
	size_t	i;

	i = hm->key_type->hash(key, hm->capacity);
	while (hm->key_type->cmp(hm->keys[i], key) != 0)
	{
		if (hm->keys[i] == NULL)
			return (NULL);
		i = (i + 1) % hm->capacity;
	}
	return (hm->vals[i]);
}
