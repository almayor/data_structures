/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:55:53 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 15:19:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

int		graph_add_edge(t_graph *graph, const void *v1, const void *v2)
{
	t_array	*array_v1;
	t_array	*array_v2;

	if (!(array_v1 = rbt_get(graph->adj, v1)) ||
		!(array_v2 = rbt_get(graph->adj, v2)))
	{
		errno = EINVAL;
		return (1);
	}
	if (array_append(array_v1, v2) ||
		array_append(array_v2, v1))
		return (1);
	graph->E++;
	return (0);
}
