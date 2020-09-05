#include "unity.h"
#include "stack.h"

void test_stack_new(void) {
	t_stack *stack = stack_new(g_type_float);
	TEST_ASSERT(stack_size(stack) == 0);
	stack_delete(stack);
}

void test_stack_push_pop_peek(void) {
	t_stack *stack = stack_new(g_type_float);
	stack_push(stack, float2ptr(0.42));
	TEST_ASSERT(stack_size(stack) == 1);
	stack_push(stack, float2ptr(-144.18));
	TEST_ASSERT(stack_size(stack) == 2);
	stack_push(stack, float2ptr(0.0015));
	TEST_ASSERT(stack_size(stack) == 3);
	TEST_ASSERT_EQUAL_FLOAT(0.0015, ptr2float(stack_peek(stack)));
	TEST_ASSERT_EQUAL_FLOAT(0.0015, ptr2float(stack_pop(stack)));
	TEST_ASSERT_EQUAL_FLOAT(-144.18, ptr2float(stack_peek(stack)));
	TEST_ASSERT_EQUAL_FLOAT(-144.18, ptr2float(stack_pop(stack)));
	TEST_ASSERT_EQUAL_FLOAT(0.42, ptr2float(stack_pop(stack)));
	stack_delete(stack);
}

void test_stack_copy(void) {
	t_stack *stack = stack_new(g_type_float);
	stack_push(stack, float2ptr(0.42));
	stack_push(stack, float2ptr(-144.18));
	stack_push(stack, float2ptr(0.0015));
	t_stack *copy = stack_copy(stack);
	TEST_ASSERT_EQUAL_FLOAT(0.0015, ptr2float(stack_peek(copy)));
	TEST_ASSERT_EQUAL_FLOAT(0.0015, ptr2float(stack_pop(copy)));
	TEST_ASSERT_EQUAL_FLOAT(-144.18, ptr2float(stack_pop(copy)));
	TEST_ASSERT_EQUAL_FLOAT(0.42, ptr2float(stack_pop(copy)));
	TEST_ASSERT_EQUAL_FLOAT(0.0015, ptr2float(stack_peek(stack)));
	TEST_ASSERT_EQUAL_FLOAT(0.0015, ptr2float(stack_pop(stack)));
	TEST_ASSERT_EQUAL_FLOAT(-144.18, ptr2float(stack_pop(stack)));
	TEST_ASSERT_EQUAL_FLOAT(0.42, ptr2float(stack_pop(stack)));
	stack_delete(stack);
	stack_delete(copy);
}

int suite_stack(void) {
	UNITY_BEGIN();
    RUN_TEST(test_stack_new);
    RUN_TEST(test_stack_push_pop_peek);
    RUN_TEST(test_stack_copy);
    return UNITY_END();
}
