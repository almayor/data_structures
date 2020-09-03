#include "unity.h"
#include "hashmap.h"

void test_hashmap_new(void) {
	t_hashmap *hm = hashmap_new(g_type_int, g_type_str);
	TEST_ASSERT(hashmap_size(hm) == 0);
	hashmap_delete(hm);
}

void test_hashmap_put(void) {
	t_hashmap *hm = hashmap_new(g_type_int, g_type_str);
	hashmap_put(hm, int2ptr(20), "Hello");
	TEST_ASSERT(hashmap_size(hm) == 1);
	hashmap_put(hm, int2ptr(20), "Veronice");
	TEST_ASSERT(hashmap_size(hm) == 1);
	hashmap_put(hm, int2ptr(18), "Malloc");
	TEST_ASSERT(hashmap_size(hm) == 2);
	hashmap_delete(hm);
}

void test_hashmap_remove(void) {
	t_hashmap *hm = hashmap_new(g_type_int, g_type_str);
	hashmap_put(hm, int2ptr(20), "Hello");
	hashmap_put(hm, int2ptr(20), "Veronice");
	hashmap_put(hm, int2ptr(18), "Malloc");
	hashmap_remove(hm, int2ptr(20));
	TEST_ASSERT(hashmap_size(hm) == 1);
	hashmap_remove(hm, int2ptr(-5));
	TEST_ASSERT(hashmap_size(hm) == 1);
	hashmap_remove(hm, int2ptr(18));
	TEST_ASSERT(hashmap_size(hm) == 0);
	hashmap_remove(hm, int2ptr(100));
	TEST_ASSERT(hashmap_size(hm) == 0);
	hashmap_delete(hm);
}

void test_hashmap_get(void) {
	t_hashmap *hm = hashmap_new(g_type_int, g_type_str);
	TEST_ASSERT_NULL(hashmap_get(hm, int2ptr(20)));
	hashmap_put(hm, int2ptr(20), "Hello");
	TEST_ASSERT_EQUAL_STRING("Hello", hashmap_get(hm, int2ptr(20)));
	hashmap_put(hm, int2ptr(20), "Veronice");
	TEST_ASSERT_EQUAL_STRING("Veronice", hashmap_get(hm, int2ptr(20)));
	hashmap_put(hm, int2ptr(18), "Malloc");
	TEST_ASSERT_EQUAL_STRING("Malloc", hashmap_get(hm, int2ptr(18)));
	TEST_ASSERT_EQUAL_STRING("Veronice", hashmap_get(hm, int2ptr(20)));
	hashmap_remove(hm, int2ptr(18));
	TEST_ASSERT_NULL(hashmap_get(hm, int2ptr(18)));
	TEST_ASSERT_EQUAL_STRING("Veronice", hashmap_get(hm, int2ptr(20)));
	hashmap_remove(hm, int2ptr(20));
	TEST_ASSERT_NULL(hashmap_get(hm, int2ptr(20)));
	hashmap_delete(hm);
}

void test_hashmap_contains(void) {
	t_hashmap *hm = hashmap_new(g_type_int, g_type_str);
	TEST_ASSERT_FALSE(hashmap_contains(hm, int2ptr(20)));
	hashmap_put(hm, int2ptr(20), "Veronice");
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(20)));
	TEST_ASSERT_FALSE(hashmap_contains(hm, int2ptr(10)));
	hashmap_put(hm, int2ptr(18), "Malloc");
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(20)));
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(18)));
	TEST_ASSERT_FALSE(hashmap_contains(hm, int2ptr(10)));
	hashmap_put(hm, int2ptr(-1), "Vortex");
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(20)));
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(18)));
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(-1)));
	hashmap_remove(hm, int2ptr(-1));
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(20)));
	TEST_ASSERT_TRUE(hashmap_contains(hm, int2ptr(18)));
	TEST_ASSERT_FALSE(hashmap_contains(hm, int2ptr(-1)));
	hashmap_delete(hm);
}
int suite_hashmap(void) {
	UNITY_BEGIN();
    RUN_TEST(test_hashmap_new);
    RUN_TEST(test_hashmap_put);
    RUN_TEST(test_hashmap_remove);
    RUN_TEST(test_hashmap_get);
    RUN_TEST(test_hashmap_contains);
	return UNITY_END();
}
