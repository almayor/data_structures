#include "unity.h"
#include "rbt.h"

void test_rbt_new(void) {
	t_rbt *rbt = rbt_new(g_type_int, g_type_str);
	TEST_ASSERT(rbt_size(rbt) == 0);
	TEST_ASSERT(rbt_height(rbt) == 0);
	rbt_delete(rbt);
}

void test_rbt_put_get(void) {
	t_rbt *rbt = rbt_new(g_type_int, g_type_str);
	rbt_put(rbt, int2ptr(10), "Hello");
	rbt_put(rbt, int2ptr(8), "Velcro");
	rbt_put(rbt, int2ptr(13), "Andante");
	rbt_put(rbt, int2ptr(15), "Oolo");
	rbt_put(rbt, int2ptr(20), "Arctic");

	TEST_ASSERT_EQUAL_STRING("Oolo", rbt_get(rbt, int2ptr(15)));
	TEST_ASSERT_EQUAL_STRING("Velcro", rbt_get(rbt, int2ptr(8)));
	TEST_ASSERT_EQUAL_STRING("Arctic", rbt_get(rbt, int2ptr(20)));
	TEST_ASSERT_EQUAL_STRING("Hello", rbt_get(rbt, int2ptr(10)));
	TEST_ASSERT_EQUAL_STRING("Andante", rbt_get(rbt, int2ptr(13)));
	rbt_delete(rbt);
}

void test_rbt_height_size(void) {
	t_rbt *rbt = rbt_new(g_type_int, g_type_str);
	rbt_put(rbt, int2ptr(10), "Hello");
	TEST_ASSERT(rbt_size(rbt) == 1);
	TEST_ASSERT(rbt_height(rbt) == 1);
	rbt_put(rbt, int2ptr(8), "Velcro");
	rbt_put(rbt, int2ptr(13), "Andante");
	TEST_ASSERT(rbt_size(rbt) == 3);
	TEST_ASSERT(rbt_height(rbt) == 2);
	rbt_put(rbt, int2ptr(15), "Oolo");
	rbt_put(rbt, int2ptr(20), "Arctic");
	TEST_ASSERT(rbt_size(rbt) == 5);
	TEST_ASSERT(rbt_height(rbt) == 3);
	rbt_delete(rbt);
}

void test_rbt_min_max(void) {
	t_rbt *rbt = rbt_new(g_type_int, g_type_str);
	rbt_put(rbt, int2ptr(10), "Hello");
	rbt_put(rbt, int2ptr(8), "Velcro");
	rbt_put(rbt, int2ptr(13), "Andante");
	rbt_put(rbt, int2ptr(15), "Oolo");
	rbt_put(rbt, int2ptr(20), "Arctic");

	TEST_ASSERT_EQUAL_INT(8, ptr2int(rbt_min(rbt)));
	TEST_ASSERT_EQUAL_INT(20, ptr2int(rbt_max(rbt)));
	rbt_delete(rbt);
}

void test_rbt_floor_ceil(void) {
	t_rbt *rbt = rbt_new(g_type_int, g_type_str);
	rbt_put(rbt, int2ptr(10), "Hello");
	rbt_put(rbt, int2ptr(8), "Velcro");
	rbt_put(rbt, int2ptr(13), "Andante");
	rbt_put(rbt, int2ptr(15), "Oolo");
	rbt_put(rbt, int2ptr(20), "Arctic");

	TEST_ASSERT_EQUAL_INT(8, ptr2int(rbt_floor(rbt, int2ptr(9))));
	TEST_ASSERT_EQUAL_INT(10, ptr2int(rbt_ceil(rbt, int2ptr(9))));
	TEST_ASSERT_EQUAL_INT(20, ptr2int(rbt_floor(rbt, int2ptr(21))));
	TEST_ASSERT_NULL(rbt_ceil(rbt, int2ptr(21)));
	TEST_ASSERT_NULL(rbt_floor(rbt, int2ptr(0)));
	TEST_ASSERT_EQUAL_INT(13, ptr2int(rbt_floor(rbt, int2ptr(13))));
	TEST_ASSERT_EQUAL_INT(13, ptr2int(rbt_ceil(rbt, int2ptr(13))));
	rbt_delete(rbt);
}

void test_rbt_rank_contains(void) {
	t_rbt *rbt = rbt_new(g_type_int, g_type_str);
	TEST_ASSERT_EQUAL_INT(0, rbt_contains(rbt, int2ptr(11)));
	rbt_put(rbt, int2ptr(10), "Hello");
	TEST_ASSERT_EQUAL_INT(0, rbt_contains(rbt, int2ptr(11)));
	TEST_ASSERT_EQUAL_INT(1, rbt_contains(rbt, int2ptr(10)));
	rbt_put(rbt, int2ptr(8), "Velcro");
	TEST_ASSERT_EQUAL_INT(0, rbt_contains(rbt, int2ptr(11)));
	TEST_ASSERT_EQUAL_INT(1, rbt_contains(rbt, int2ptr(10)));
	TEST_ASSERT_EQUAL_INT(1, rbt_contains(rbt, int2ptr(8)));
	rbt_put(rbt, int2ptr(13), "Andante");
	rbt_put(rbt, int2ptr(15), "Oolo");
	rbt_put(rbt, int2ptr(20), "Arctic");

	TEST_ASSERT(rbt_rank(rbt, int2ptr(8)) == 0);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(7)) == 0);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(9)) == 1);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(10)) == 1);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(12)) == 2);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(13)) == 2);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(14)) == 3);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(15)) == 3);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(16)) == 4);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(20)) == 4);
	TEST_ASSERT(rbt_rank(rbt, int2ptr(21)) == 5);
	rbt_delete(rbt);
}

void test_rbt_nth(void) {
	t_rbt *rbt = rbt_new(g_type_str, g_type_int);
	rbt_put(rbt, "Hello", int2ptr(10));
	rbt_put(rbt, "Velcro", int2ptr(8));
	rbt_put(rbt, "Andante", int2ptr(13));
	rbt_put(rbt, "Oolo", int2ptr(15));
	rbt_put(rbt, "Arctic", int2ptr(20));

	TEST_ASSERT_EQUAL_STRING("Andante", rbt_nth(rbt, 0));
	TEST_ASSERT_EQUAL_STRING("Arctic", rbt_nth(rbt, 1));
	TEST_ASSERT_EQUAL_STRING("Hello", rbt_nth(rbt, 2));
	TEST_ASSERT_EQUAL_STRING("Oolo", rbt_nth(rbt, 3));
	TEST_ASSERT_EQUAL_STRING("Velcro", rbt_nth(rbt, 4));
}

int suite_rbt(void) {
	UNITY_BEGIN();
    RUN_TEST(test_rbt_new);
    RUN_TEST(test_rbt_put_get);
    RUN_TEST(test_rbt_height_size);
    RUN_TEST(test_rbt_min_max);
    RUN_TEST(test_rbt_floor_ceil);
    RUN_TEST(test_rbt_rank_contains);
    RUN_TEST(test_rbt_nth);
    return UNITY_END();
}
