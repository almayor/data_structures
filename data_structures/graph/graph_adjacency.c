/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_adjancency.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:42:21 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 15:24:13 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graph.h"

t_queue		*graph_adjacency(const t_graph *graph, const void *v)
{
	t_array	*array;

	if (!(array = rbt_get(graph->adj, v)))
	{
		errno = EINVAL;
		return (NULL);
	}
	return (array_to_queue(array));
}
