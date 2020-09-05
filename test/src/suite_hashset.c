#include "unity.h"
#include "hashset.h"

void test_hashset_new(void) {
	t_hashset *hs = hashset_new(g_type_int);
	TEST_ASSERT(hashset_size(hs) == 0);
	hashset_delete(hs);
}

void test_hashset_put(void) {
	t_hashset *hs = hashset_new(g_type_int);
	hashset_put(hs, int2ptr(20));
	TEST_ASSERT(hashset_size(hs) == 1);
	hashset_put(hs, int2ptr(20));
	TEST_ASSERT(hashset_size(hs) == 1);
	hashset_put(hs, int2ptr(18));
	TEST_ASSERT(hashset_size(hs) == 2);
	hashset_delete(hs);
}

void test_hashset_remove(void) {
	t_hashset *hs = hashset_new(g_type_int);
	hashset_put(hs, int2ptr(20));
	hashset_put(hs, int2ptr(18));
	hashset_put(hs, int2ptr(19));
	hashset_put(hs, int2ptr(-1));
	TEST_ASSERT(hashset_size(hs) == 4);
	hashset_remove(hs, int2ptr(20));
	TEST_ASSERT(hashset_size(hs) == 3);
	hashset_remove(hs, int2ptr(20));
	TEST_ASSERT(hashset_size(hs) == 3);
	hashset_remove(hs, int2ptr(18));
	TEST_ASSERT(hashset_size(hs) == 2);
	hashset_remove(hs, int2ptr(19));
	TEST_ASSERT(hashset_size(hs) == 1);
	hashset_remove(hs, int2ptr(19));
	TEST_ASSERT(hashset_size(hs) == 1);
	hashset_remove(hs, int2ptr(-1));
	TEST_ASSERT(hashset_size(hs) == 0);
	hashset_remove(hs, int2ptr(-1));
	TEST_ASSERT(hashset_size(hs) == 0);
	hashset_delete(hs);
}

void test_hashset_contains(void) {
	t_hashset *hs = hashset_new(g_type_int);
	TEST_ASSERT_FALSE(hashset_contains(hs, int2ptr(20)));
	hashset_put(hs, int2ptr(20));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(20)));
	TEST_ASSERT_FALSE(hashset_contains(hs, int2ptr(10)));
	hashset_put(hs, int2ptr(18));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(20)));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(18)));
	TEST_ASSERT_FALSE(hashset_contains(hs, int2ptr(10)));
	hashset_put(hs, int2ptr(-1));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(20)));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(18)));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(-1)));
	hashset_remove(hs, int2ptr(-1));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(20)));
	TEST_ASSERT_TRUE(hashset_contains(hs, int2ptr(18)));
	TEST_ASSERT_FALSE(hashset_contains(hs, int2ptr(-1)));
	hashset_delete(hs);
}

int suite_hashset(void) {
	UNITY_BEGIN();
    RUN_TEST(test_hashset_new);
    RUN_TEST(test_hashset_put);
    RUN_TEST(test_hashset_remove);
	RUN_TEST(test_hashset_contains);
	return UNITY_END();
}
