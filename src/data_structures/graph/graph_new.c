/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:44:01 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:46:01 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

t_graph	*graph_new(const t_type *type)
{
	t_graph	*graph;

	graph = ds_xcalloc(sizeof(t_graph), 1);
	graph->adj = rbt_new(type, g_type_array);
	graph->v = 0;
	graph->e = 0;
	graph->type = type;
	return (graph);
}
