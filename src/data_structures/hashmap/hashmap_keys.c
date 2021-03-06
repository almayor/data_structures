/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_keys.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:12:25 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 20:19:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

t_queue	*hashmap_keys(const t_hashmap *hm)
{
	t_queue	*queue;
	size_t	i;

	queue = queue_new(hm->key_type);
	i = 0;
	while (i < hm->capacity)
	{
		if (hm->keys[i] != NULL)
			queue_enqueue(queue, hm->keys[i]);
		i++;
	}
	return (queue);
}
