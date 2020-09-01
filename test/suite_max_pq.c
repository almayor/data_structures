#include "unity.h"
#include "data_structures.h"
#include "max_pq.h"
#include <stdlib.h>

void test_max_pq_new(void) {
	t_max_pq *pq = max_pq_new(g_type_str);
	TEST_ASSERT(max_pq_size(pq) == 0);
	max_pq_delete(pq);
}

void test_max_pq_add_pop_peek(void) {
	t_max_pq *pq = max_pq_new(g_type_str);
	max_pq_add(pq, "Hello");
	max_pq_add(pq, "a sentence");
	max_pq_add(pq, "Very Well");
	TEST_ASSERT(max_pq_size(pq) == 3);
	TEST_ASSERT_EQUAL_STRING("a sentence", max_pq_peek(pq));
	max_pq_pop(pq);
	TEST_ASSERT_EQUAL_STRING("Very Well", max_pq_pop(pq));
	max_pq_add(pq, "Dunzig");
	TEST_ASSERT_EQUAL_STRING("Hello", max_pq_peek(pq));
	max_pq_add(pq, "Cardiff");
	TEST_ASSERT_EQUAL_STRING("Hello", max_pq_pop(pq));
	TEST_ASSERT_EQUAL_STRING("Dunzig", max_pq_pop(pq));
	TEST_ASSERT_EQUAL_STRING("Cardiff", max_pq_pop(pq));
	max_pq_delete(pq);
}

void test_max_pq_copy(void) {
	t_max_pq *pq = max_pq_new(g_type_str);
	max_pq_add(pq, "Hello");
	max_pq_add(pq, "a sentence");
	max_pq_add(pq, "Very Well");
	t_max_pq *copy = max_pq_copy(pq);
	TEST_ASSERT(max_pq_size(copy) == 3);
	TEST_ASSERT_EQUAL_STRING("a sentence", max_pq_peek(copy));
	max_pq_pop(copy);
	TEST_ASSERT_EQUAL_STRING("Very Well", max_pq_pop(copy));
	max_pq_add(copy, "Dunzig");
	TEST_ASSERT_EQUAL_STRING("Hello", max_pq_peek(copy));
	max_pq_add(copy, "Cardiff");
	TEST_ASSERT_EQUAL_STRING("Hello", max_pq_pop(copy));
	TEST_ASSERT_EQUAL_STRING("Dunzig", max_pq_pop(copy));
	TEST_ASSERT_EQUAL_STRING("Cardiff", max_pq_pop(copy));
	TEST_ASSERT_EQUAL_STRING("a sentence", max_pq_peek(pq));
	max_pq_delete(pq);
	max_pq_delete(copy);
}

int suite_max_pq(void) {
 	UNITY_BEGIN();
    RUN_TEST(test_max_pq_new);
    RUN_TEST(test_max_pq_add_pop_peek);
    RUN_TEST(test_max_pq_copy);
    return UNITY_END();
}