/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pq_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:05:12 by unite             #+#    #+#             */
/*   Updated: 2020/07/17 16:26:49 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "min_pq.h"

static void min_pq_swim(t_min_pq *pq, size_t k)
{
	while (k > 1)
	{
		if (pq->type->cmp(
				array_get(pq, (k / 2) - 1),
				array_get(pq, k - 1)) > 0)
			array_swap(pq, (k / 2) - 1, k - 1);
		else
			break ;
		k = k / 2;
	}
}

int			min_pq_add(t_min_pq *pq, const void *data)
{
	if (array_append(pq, data))
		return (1);
	min_pq_swim(pq, min_pq_size(pq));
	return (0);
}
