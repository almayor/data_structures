/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:10:11 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 22:47:53 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H

# define GRAPH_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "array.h"
# include "rbt.h"

/*
** @struct s_graph
** @brief A graph implemented using a set of arrays
** @var s_graph::v
** @brief The number of vertices
** @var s_graph::e
** @brief The number of edges
** @var s_graph::adj
** @brief The set of arrays, where each arrays represents the adjacency
** of a given vertex.
** @var s_graph::type
** @brief The type of vertices in the graph
*/

typedef struct	s_graph
{
	size_t			v;
	size_t			e;
	t_rbt			*adj;
	const t_type	*type;
}				t_graph;

/*
** Initializes a new graph with vertices of the specified type.
** @param type The type of vertices
** @return The new graph, or `NULL` if an error occured. In case of an error,
** `errno` is set accordingly.
*/

t_graph			*graph_new(const t_type *type);

/*
** Adds a vertex to the graph
** @param v The vertex name to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
*/

int				graph_add_vertex(t_graph *graph, const void *v);

/*
** Adds an edge between two vertices in the graph
** @param v1 One vertex
** @param v2 The other vertex
** @return `0` on success, `1` on error (e.g. if either vertex is not in
** the graph). In case of an error, `errno` is set accordingly.
*/

int				graph_add_edge(t_graph *graph, const void *v1, const void *v2);

/*
** Deletes this graph and frees all the associated data. Does
** nothing if the argument is `NULL`.
*/

void			graph_delete(t_graph *graph);

/*
** Returns the queue with all the vertices in this graph
** @return The queue with all the vertices in this graph, or `NULL`,
** if an error occured. In case of an error, `errno` is set accordingly.
*/

t_queue			*graph_vertices(const t_graph *graph);

/*
** Returns the queue with all the vertices in this graph that are
** adjancent to the specified vertex.
** @param v	The vertexe
** @return The queue with all the vertices in this graph that are
** adjacent to the specified vertex, or `NULL`,
** if an error occured. In case of an error, `errno` is set accordingly.
*/

t_queue			*graph_adjacency(const t_graph *graph, const void *v);

/*
** Are two vertices in the graph adjacent to each other?
** @param v1 One vertex
** @param v2 The other vertex
** @return `1` if the vertices are adjacent, `0` otherwise
*/

int				graph_adjacent(const t_graph *graph, const void *v1,
								const void *v2);

#endif
