/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_vals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:15:14 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:55:40 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

t_queue		*hashset_vals(const t_hashset *hs)
{
	t_queue	*queue;
	size_t	i;

	queue = queue_new(hs->type);
	i = 0;
	while (i < hs->capacity)
	{
		if (hs->vals[i] != NULL)
			queue_enqueue(queue, hs->vals[i]);
		i++;
	}
	return (queue);
}
