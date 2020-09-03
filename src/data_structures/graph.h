/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:10:11 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 00:00:46 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H

# define GRAPH_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"
# include "array.h"
# include "rbt.h"

typedef struct	s_graph
{
	size_t			v;
	size_t			e;
	t_rbt			*adj;
	const t_type	*type;
}				t_graph;

t_graph			*graph_new(const t_type *type);
int				graph_add_vertex(t_graph *graph, const void *v);
int				graph_add_edge(t_graph *graph, const void *v1, const void *v2);
void			graph_delete(t_graph *graph);
t_queue			*graph_vertices(const t_graph *graph);
t_queue			*graph_adjacency(const t_graph *graph, const void *v);
int				graph_adjacent(const t_graph *graph, const void *v1,
								const void *v2);

#endif
