#include "unity.h"
#include "bst.h"

void test_bst_new(void) {
	t_bst *bst = bst_new(g_type_int, g_type_str);
	TEST_ASSERT(bst_size(bst) == 0);
	TEST_ASSERT(bst_height(bst) == 0);
	bst_delete(bst);
}

void test_bst_put_get(void) {
	t_bst *bst = bst_new(g_type_int, g_type_str);
	bst_put(bst, int2ptr(10), "Hello");
	bst_put(bst, int2ptr(8), "Velcro");
	bst_put(bst, int2ptr(13), "Andante");
	bst_put(bst, int2ptr(15), "Oolo");
	bst_put(bst, int2ptr(20), "Arctic");

	TEST_ASSERT_EQUAL_STRING("Oolo", bst_get(bst, int2ptr(15)));
	TEST_ASSERT_EQUAL_STRING("Velcro", bst_get(bst, int2ptr(8)));
	TEST_ASSERT_EQUAL_STRING("Arctic", bst_get(bst, int2ptr(20)));
	TEST_ASSERT_EQUAL_STRING("Hello", bst_get(bst, int2ptr(10)));
	TEST_ASSERT_EQUAL_STRING("Andante", bst_get(bst, int2ptr(13)));
	bst_delete(bst);
}

void test_bst_height_size(void) {
	t_bst *bst = bst_new(g_type_int, g_type_str);
	bst_put(bst, int2ptr(10), "Hello");
	TEST_ASSERT(bst_size(bst) == 1);
	TEST_ASSERT(bst_height(bst) == 1);
	bst_put(bst, int2ptr(8), "Velcro");
	bst_put(bst, int2ptr(13), "Andante");
	TEST_ASSERT(bst_size(bst) == 3);
	TEST_ASSERT(bst_height(bst) == 2);
	bst_put(bst, int2ptr(15), "Oolo");
	bst_put(bst, int2ptr(20), "Arctic");
	TEST_ASSERT(bst_size(bst) == 5);
	TEST_ASSERT(bst_height(bst) == 4);
	bst_delete(bst);
}

int suite_bst(void) {
	UNITY_BEGIN();
    RUN_TEST(test_bst_new);
    RUN_TEST(test_bst_put_get);
    RUN_TEST(test_bst_height_size);
    return UNITY_END();
}
