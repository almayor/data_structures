#include "rbt.h"
#include "hashmap.h"
#include "array.h"
#include "queue.h"
#include "types.h"
#include "stack.h"
#include "union_find.h"
#include "utils.h"
#include "graph.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	t_graph	*graph;
	t_queue	*queue;

	graph = graph_new(g_type_str);

	graph_add_vertex(graph, "Hello");
	queue_print(rbt_keys(graph->adj));
	graph_add_vertex(graph, "Edge");
	queue_print(rbt_keys(graph->adj));
	graph_add_vertex(graph, "Adagio");
	queue_print(rbt_keys(graph->adj));

	graph_add_edge(graph, "Hello", "Edge");
	graph_add_edge(graph, "Hello", "Adagio");

	queue_print(graph_vertices(graph));
	ft_printf("Adjacent = %d\n", graph_adjacent(graph, "Hello", "Adagio"));
	ft_printf("Adjacent = %d\n", graph_adjacent(graph, "Edge", "Adagio"));
	//queue_print(graph_adjacency(graph, "Hello"));
	//queue_print(graph_adjacency(graph, "Bla"));

	graph_delete(graph);
}
