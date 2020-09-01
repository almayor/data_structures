/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edmonds_karp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 09:50:07 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 16:52:59 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "edmonds_karp.h"

static void		*ek_process_vertex(const t_graph *graph, const void *v,
									t_queue *queue, t_hashmap *edge_to)
{
	t_queue	*adjacency;
	char	*w;

	adjacency = graph_adjacency(graph, v);
	while ((w = queue_dequeue(adjacency)))
	{
		if (!hashmap_contains(edge_to, w))
		{
			hashmap_put(edge_to, w, v);
			queue_enqueue(queue, w);
		}
		free(w);
	}
	queue_delete(adjacency);
}

static t_list	*ek_unroll_path(const t_hashmap *edge_to, const char *source,
								const char *sink, t_hashset *marked)
{
	t_list	*path;
	char	*w;

	if (!(path = list_new(g_type_str)))
		return (NULL);
	list_add_first(path, sink);
	w = hashmap_get(sink);
	while (w != source)
	{
		hashset_put(marked, w);
		list_add_first(path, w);
		w = hashmap_get(w);
	}
	return (path);
}

static t_list	*ek_bfs(const t_graph *graph, const char *source,
						const char *sink, t_hashset	*marked)
{
	t_list		*path;
	t_hashmap	*edge_to;
	t_queue		*queue;
	char		*v;

	if (!(edge_to = hashmap_new(g_type_str)) ||
		!(queue = queue_new(g_type_str)))
		return (NULL);
	hashmap_put(edge_to, source, source);
	queue_enqueue(queue, source);
	while (queue_size(queue) > 0)
	{
		if ((v = queue_dequeue(queue)) == sink)
			break ;
		if (hashset_contains(marked, v))
			continue ;
		ek_process_vertex(graph, v, queue, edge_to);
		free(v);
	}
	path = ek_unroll_path(edge_to, source, sink, marked);
	hashmap_delete(edge_to);
	queue_delete(queue);
	return (path);
}

t_array			*edmonds_karp(const t_graph *graph, const char *source,
								const char *sink)
{
	t_hashset	*marked;
	t_array		*paths;
	t_list		*path;

	if (!(marked = hashset_new(g_type_str)) ||
		!(paths = array_new(g_type_list)))
	{
		hashset_delete(marked);
		return (NULL);
	}
	while ((path = ek_bfs(graph, edk)))
	{
		array_append(path);
		list_delete(path);
	}
	return (paths);
}
