#include "unity.h"
#include "data_structures.h"
#include "min_pq.h"
#include <stdlib.h>

void test_min_pq_new(void) {
	t_min_pq *pq = min_pq_new(g_type_str);
	TEST_ASSERT(min_pq_size(pq) == 0);
	min_pq_delete(pq);
}

void test_min_pq_add_pop_peek(void) {
	t_min_pq *pq = min_pq_new(g_type_str);
	min_pq_add(pq, "Hello");
	min_pq_add(pq, "a sentence");
	min_pq_add(pq, "Very Well");
	TEST_ASSERT(min_pq_size(pq) == 3);
	TEST_ASSERT_EQUAL_STRING("Hello", min_pq_peek(pq));
	min_pq_pop(pq);
	TEST_ASSERT_EQUAL_STRING("Very Well", min_pq_pop(pq));
	min_pq_add(pq, "Dunzig");
	TEST_ASSERT_EQUAL_STRING("Dunzig", min_pq_peek(pq));
	min_pq_add(pq, "Cardiff");
	TEST_ASSERT_EQUAL_STRING("Cardiff", min_pq_pop(pq));
	TEST_ASSERT_EQUAL_STRING("Dunzig", min_pq_pop(pq));
	TEST_ASSERT_EQUAL_STRING("a sentence", min_pq_pop(pq));
	min_pq_delete(pq);
}

void test_min_pq_copy(void) {
	t_min_pq *pq = min_pq_new(g_type_str);
	min_pq_add(pq, "Hello");
	min_pq_add(pq, "a sentence");
	min_pq_add(pq, "Very Well");
	t_min_pq *copy = min_pq_copy(pq);
	TEST_ASSERT(min_pq_size(copy) == 3);
	TEST_ASSERT_EQUAL_STRING("Hello", min_pq_peek(copy));
	min_pq_pop(copy);
	TEST_ASSERT_EQUAL_STRING("Very Well", min_pq_pop(copy));
	min_pq_add(copy, "Dunzig");
	TEST_ASSERT_EQUAL_STRING("Dunzig", min_pq_peek(copy));
	min_pq_add(copy, "Cardiff");
	TEST_ASSERT_EQUAL_STRING("Cardiff", min_pq_pop(copy));
	TEST_ASSERT_EQUAL_STRING("Dunzig", min_pq_pop(copy));
	TEST_ASSERT_EQUAL_STRING("a sentence", min_pq_pop(copy));
	TEST_ASSERT_EQUAL_STRING("Hello", min_pq_peek(pq));
	min_pq_delete(pq);
}

int suite_min_pq(void) {
 	UNITY_BEGIN();
    RUN_TEST(test_min_pq_new);
    RUN_TEST(test_min_pq_add_pop_peek);
    RUN_TEST(test_min_pq_copy);
    return UNITY_END();
}