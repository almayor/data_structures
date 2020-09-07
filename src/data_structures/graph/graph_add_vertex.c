/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_add_vertex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:51:16 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 20:07:59 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

void	graph_add_vertex(t_graph *graph, const void *v)
{
	t_array	*array;

	if (rbt_contains(graph->adj, v))
		return ;
	array = array_new(graph->type);
	rbt_put(graph->adj, v, array);
	array_delete(array);
	graph->v++;
}
