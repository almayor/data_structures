/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_vals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:15:14 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:46:40 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

t_queue		*hashmap_vals(const t_hashmap *hm)
{
	t_queue	*queue;
	size_t	i;

	if (!(queue = queue_new(hm->val_type)))
		return (NULL);
	i = 0;
	while (i < hm->capacity)
	{
		if (hm->vals[i] != NULL && queue_enqueue(queue, hm->vals[i]))
		{
			queue_delete(queue);
			return (NULL);
		}
		i++;
	}
	return (queue);
}
