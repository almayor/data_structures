/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_contains.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:53:13 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 22:48:22 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int		hashmap_contains(const t_hashmap *hm, const void *key)
{
	size_t	i;

	i = hm->key_type->hash(key, hm->capacity);
	while (hm->keys[i] != NULL)
	{
		if (hm->key_type->cmp(hm->keys[i], key) == 0)
			return (1);
		i = (i + 1) % hm->capacity;
	}
	return (0);
}
