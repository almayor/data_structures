/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:44:01 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 14:56:48 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

t_graph	*graph_new(const t_type *type)
{
	t_graph	*graph;

	if (!(graph = ft_calloc(sizeof(t_graph), 1)) ||
		!(graph->adj = rbt_new(type, g_type_array)))
	{
		errno = ENOMEM;
		graph_delete(graph);
		return (NULL);
	}
	graph->V = 0;
	graph->E = 0;
	graph->type = type;
	return (graph);
}
