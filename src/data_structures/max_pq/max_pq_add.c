/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pq_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:05:12 by unite             #+#    #+#             */
/*   Updated: 2020/07/17 19:17:55 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "max_pq.h"

static void max_pq_swim(t_max_pq *pq, size_t k)
{
	while (k > 1)
	{
		if (pq->type->cmp(
				array_get(pq, (k / 2) - 1),
				array_get(pq, k - 1)) < 0)
			array_swap(pq, (k / 2) - 1, k - 1);
		else
			break ;
		k = k / 2;
	}
}

int			max_pq_add(t_max_pq *pq, const void *data)
{
	if (array_append(pq, data))
		return (1);
	max_pq_swim(pq, max_pq_size(pq));
	return (0);
}
