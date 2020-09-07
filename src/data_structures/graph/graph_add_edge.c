/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_edge.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:55:53 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:48:50 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void	graph_add_edge(t_graph *graph, const void *v1, const void *v2)
{
	t_array	*array_v1;
	t_array	*array_v2;

	if (!(array_v1 = rbt_get(graph->adj, v1)) ||
		!(array_v2 = rbt_get(graph->adj, v2)))
		ds_exit_set(EINVAL);
	array_append(array_v1, v2);
	array_append(array_v2, v1);
	graph->e++;
}
