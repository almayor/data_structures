#include "union_find.h"
#include "unity.h"

void test_union_find_new(void) {
	t_union_find *uf = union_find_new(5);
	TEST_ASSERT(union_find_size(uf) == 5);
	TEST_ASSERT(union_find_count(uf) == 5);
	union_find_delete(uf); 
}

void test_union_find_union(void) {
	t_union_find *uf = union_find_new(5);
	union_find_union(uf, 0, 1);
	TEST_ASSERT(union_find_count(uf) == 4);
	union_find_union(uf, 0, 2);
	TEST_ASSERT(union_find_count(uf) == 3);
	union_find_union(uf, 1, 2);
	TEST_ASSERT(union_find_count(uf) == 3);
	union_find_union(uf, 1, 4);
	TEST_ASSERT(union_find_count(uf) == 2);
	union_find_union(uf, 3, 4);
	TEST_ASSERT(union_find_count(uf) == 1);
	union_find_union(uf, 1, 3);
	TEST_ASSERT(union_find_count(uf) == 1);
	union_find_union(uf, 4, 2);
	TEST_ASSERT(union_find_count(uf) == 1);
	union_find_delete(uf); 
}

void test_union_find_find(void) {
	t_union_find *uf = union_find_new(5);
	union_find_union(uf, 0, 1);
	TEST_ASSERT_TRUE(union_find_find(uf, 0) == union_find_find(uf, 1));
	TEST_ASSERT_FALSE(union_find_find(uf, 0) == union_find_find(uf, 2));
	union_find_union(uf, 0, 2);
	TEST_ASSERT_TRUE(union_find_find(uf, 2) == union_find_find(uf, 1));
	union_find_delete(uf); 
}

int suite_union_find(void) {
    UNITY_BEGIN();
    RUN_TEST(test_union_find_new);
    RUN_TEST(test_union_find_union);
    RUN_TEST(test_union_find_find);
    return UNITY_END();
}
