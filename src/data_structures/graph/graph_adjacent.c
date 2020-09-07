/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_adjacent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:51:34 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:49:18 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

int	graph_adjacent(const t_graph *graph, const void *v1, const void *v2)
{
	size_t			i;
	const t_array	*adjacency;

	if (!rbt_contains(graph->adj, v1) || !rbt_contains(graph->adj, v2))
		ds_exit_set(EINVAL);
	adjacency = rbt_get(graph->adj, v1);
	i = 0;
	while (i < array_size(adjacency))
	{
		if (graph->type->cmp(v2, array_get(adjacency, i)) == 0)
			return (1);
		i++;
	}
	return (0);
}
