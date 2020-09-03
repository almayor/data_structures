/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pq_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:23:02 by unite             #+#    #+#             */
/*   Updated: 2020/09/01 20:12:31 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "max_pq.h"

static void		max_pq_sink(t_max_pq *pq, size_t k)
{
	size_t	j;

	while (2 * k <= array_size(pq))
	{
		j = 2 * k;
		if (j < array_size(pq) &&
			pq->type->cmp(
				array_get(pq, j - 1),
				array_get(pq, j)) < 0)
			j++;
		if (pq->type->cmp(
				array_get(pq, k - 1),
				array_get(pq, j - 1)) < 0)
			array_swap(pq, k - 1, j - 1);
		else
			break ;
		k = j;
	}
}

void			*max_pq_pop(t_max_pq *pq)
{
	void	*max;

	array_swap(pq, 0, array_size(pq) - 1);
	max = array_pop(pq);
	max_pq_sink(pq, 1);
	return (max);
}
