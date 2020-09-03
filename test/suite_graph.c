#include "unity.h"
#include "graph.h"

void test_graph_new(void) {
	t_graph *graph = graph_new(g_type_str);
	TEST_ASSERT(graph->e == 0);
	TEST_ASSERT(graph->v == 0);
	graph_delete(graph);
}

void test_graph_add_vertex(void) {
	t_graph *graph = graph_new(g_type_str);
	graph_add_vertex(graph, "Moscow");
	TEST_ASSERT(graph->e == 0);
	TEST_ASSERT(graph->v == 1);
	graph_add_vertex(graph, "Moscow");
	TEST_ASSERT(graph->e == 0);
	TEST_ASSERT(graph->v == 1);
	graph_add_vertex(graph, "Tver");
	TEST_ASSERT(graph->e == 0);
	TEST_ASSERT(graph->v == 2);
	graph_delete(graph);
}

void test_graph_add_edge(void) {
	t_graph *graph = graph_new(g_type_str);
	graph_add_vertex(graph, "Moscow");
	graph_add_vertex(graph, "Tver");
	graph_add_vertex(graph, "St. Petersburg");
	graph_add_edge(graph, "Moscow", "Tver");
	TEST_ASSERT(graph->e == 1);
	TEST_ASSERT(graph->v == 3);
	graph_add_edge(graph, "Moscow", "St. Petersburg");
	TEST_ASSERT(graph->e == 2);
	TEST_ASSERT(graph->v == 3);
	graph_add_edge(graph, "Tver", "St. Petersburg");
	TEST_ASSERT(graph->e == 3);
	TEST_ASSERT(graph->v == 3);
	graph_delete(graph);
}

void test_graph_adjacent(void) {
	t_graph *graph = graph_new(g_type_str);
	graph_add_vertex(graph, "Moscow");
	graph_add_vertex(graph, "Tver");
	graph_add_vertex(graph, "St. Petersburg");
	TEST_ASSERT_FALSE(graph_adjacent(graph, "Moscow", "Tver"));
	TEST_ASSERT_FALSE(graph_adjacent(graph, "St. Petersburg", "Tver"));
	TEST_ASSERT_FALSE(graph_adjacent(graph, "St. Petersburg", "Moscow"));
	graph_add_edge(graph, "Moscow", "Tver");
	TEST_ASSERT_TRUE(graph_adjacent(graph, "Moscow", "Tver"));
	TEST_ASSERT_TRUE(graph_adjacent(graph, "Tver", "Moscow"));
	TEST_ASSERT_FALSE(graph_adjacent(graph, "St. Petersburg", "Tver"));
	TEST_ASSERT_FALSE(graph_adjacent(graph, "St. Petersburg", "Moscow"));
	graph_add_edge(graph, "Moscow", "St. Petersburg");
	TEST_ASSERT_TRUE(graph_adjacent(graph, "Moscow", "Tver"));
	TEST_ASSERT_TRUE(graph_adjacent(graph, "St. Petersburg", "Moscow"));
	TEST_ASSERT_FALSE(graph_adjacent(graph, "St. Petersburg", "Tver"));	
	graph_delete(graph);
}

int suite_graph(void) {
	UNITY_BEGIN();
    RUN_TEST(test_graph_new);
    RUN_TEST(test_graph_add_vertex);
    RUN_TEST(test_graph_add_edge);
    RUN_TEST(test_graph_adjacent);
    return UNITY_END();
}
