#include "array.h"
#include "unity.h"

void test_array_new(void) {
	t_array *array = array_new(g_type_str);
	TEST_ASSERT(array->size == 0);
	TEST_ASSERT(array->capacity == ARRAY_INIT_CAPACITY);
	array_delete(array); 
}

void test_array_append(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	char *arr[] = {"Hello", "Edge", "Adagio", "Velcro", "Massage", "Xylo"};
	TEST_ASSERT_EQUAL_STRING_ARRAY(arr, array->arr, 6);
	TEST_ASSERT(array->size == 6);
	array_delete(array); 
}

void test_array_copy(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	t_array *copy = array_copy(array);
	char *arr[] = {"Hello", "Edge", "Adagio", "Velcro", "Massage", "Xylo"};
	TEST_ASSERT_EQUAL_STRING_ARRAY(arr, copy->arr, 6);
	TEST_ASSERT(copy->size == 6);
	array_delete(array); 
	array_delete(copy);
}

void test_array_get(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	TEST_ASSERT_EQUAL_STRING("Hello", array_get(array, 0));
	TEST_ASSERT_EQUAL_STRING("Velcro", array_get(array, 3));
	TEST_ASSERT_EQUAL_STRING("Xylo", array_get(array, 5));
	array_delete(array); 
}

void test_array_insert(void) {
	t_array *array = array_new(g_type_int);
	array_append(array, int2ptr(8));
	array_append(array, int2ptr(10));
	array_append(array, int2ptr(-1));
	array_append(array, int2ptr(0));
	array_append(array, int2ptr(12));
	array_append(array, int2ptr(21));
	array_insert(array, 1, int2ptr(432));
	TEST_ASSERT_EQUAL_INT(8, *(int*)array_get(array, 0));
	TEST_ASSERT_EQUAL_INT(432, *(int*)array_get(array, 1));
	TEST_ASSERT_EQUAL_INT(10, *(int*)array_get(array, 2));
	TEST_ASSERT_EQUAL_INT(-1, *(int*)array_get(array, 3));
	TEST_ASSERT_EQUAL_INT(0, *(int*)array_get(array, 4));
	TEST_ASSERT_EQUAL_INT(12, *(int*)array_get(array, 5));
	TEST_ASSERT_EQUAL_INT(21, *(int*)array_get(array, 6));
	TEST_ASSERT(7 == array->size);
	array_delete(array); 
}

void test_array_pop(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	TEST_ASSERT_EQUAL_STRING("Xylo", array_pop(array));
	TEST_ASSERT(array->size == 5);
	TEST_ASSERT_EQUAL_STRING("Massage", array_pop(array));
	TEST_ASSERT(array->size == 4);
	TEST_ASSERT_EQUAL_STRING("Velcro", array_pop(array));
	TEST_ASSERT(array->size == 3);
	array_delete(array); 
}

void test_array_remove(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	array_remove(array, 3);
	TEST_ASSERT(array->size == 5);
	TEST_ASSERT_EQUAL_STRING("Massage", array_get(array, 3));
	array_delete(array);
}

void test_array_set(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	array_set(array, 3, "Maxima");
	TEST_ASSERT(array->size == 6);
	TEST_ASSERT_EQUAL_STRING("Maxima", array_get(array, 3));
	array_delete(array);
}

void test_array_merge_sort(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	char *arr[] = {"Adagio", "Edge", "Hello", "Massage", "Velcro", "Xylo"};
	array_merge_sort(array);
	TEST_ASSERT_EQUAL_STRING_ARRAY(arr, array->arr, 6);
	array_delete(array);
}

void test_array_quick_sort(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	char *arr[] = {"Adagio", "Edge", "Hello", "Massage", "Velcro", "Xylo"};
	array_quick_sort(array);
	TEST_ASSERT_EQUAL_STRING_ARRAY(arr, array->arr, 6);
	array_delete(array);
}

void test_array_insertion_sort(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	char *arr[] = {"Adagio", "Edge", "Hello", "Massage", "Velcro", "Xylo"};
	array_insertion_sort(array);
	TEST_ASSERT_EQUAL_STRING_ARRAY(arr, array->arr, 6);
	array_delete(array);
}

void test_array_sorted(void) {
	t_array *array = array_new(g_type_str);
	array_append(array, "Hello");
	array_append(array, "Edge");
	array_append(array, "Adagio");
	array_append(array, "Velcro");
	array_append(array, "Massage");
	array_append(array, "Xylo");
	TEST_ASSERT(array_sorted(array) == 0);
	array_quick_sort(array);
	TEST_ASSERT(array_sorted(array) == 1);
	array_delete(array);
}

int suite_array(void) {
    UNITY_BEGIN();
    RUN_TEST(test_array_new);
    RUN_TEST(test_array_append);
    RUN_TEST(test_array_copy);
    RUN_TEST(test_array_get);
    RUN_TEST(test_array_insert);
    RUN_TEST(test_array_pop);
    RUN_TEST(test_array_remove);
    RUN_TEST(test_array_set);
    RUN_TEST(test_array_merge_sort);
    RUN_TEST(test_array_quick_sort);
    RUN_TEST(test_array_insertion_sort);
    RUN_TEST(test_array_sorted);
    return UNITY_END();
}
