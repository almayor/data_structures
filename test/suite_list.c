#include "unity.h"
#include "list.h"

void test_list_new(void) {
	t_list *list = list_new(g_type_char);
	TEST_ASSERT(list->size == 0);
	list_delete(list);
}

void test_list_add_first(void) {
	t_list *list = list_new(g_type_str);
	list_add_first(list, "Malloc");
	list_add_first(list, "Roxolana");
	list_add_first(list, "Mirage");
	TEST_ASSERT(list->size == 3);
	TEST_ASSERT_EQUAL_STRING("Mirage", list->head->content);
	TEST_ASSERT_EQUAL_STRING("Malloc", list->tail->content);
	list_delete(list);
}

void test_list_add_last(void) {
	t_list *list = list_new(g_type_str);
	list_add_last(list, "Malloc");
	list_add_last(list, "Roxolana");
	list_add_last(list, "Mirage");
	TEST_ASSERT(list->size == 3);
	TEST_ASSERT_EQUAL_STRING("Malloc", list->head->content);
	TEST_ASSERT_EQUAL_STRING("Mirage", list->tail->content);
	list_delete(list);
}

void test_list_unlink_first(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_unlink_first(list)));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_unlink_first(list)));
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_unlink_first(list)));
	list_delete(list);
}

void test_list_unlink_last(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_unlink_last(list)));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_unlink_last(list)));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_unlink_last(list)));
	list_delete(list);
}

void test_list_unlink(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	list_add_first(list, char2ptr('C'));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_unlink(list, 2)));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_unlink(list, 1)));
	list_delete(list);
}

void test_list_copy(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	t_list *copy = list_copy(list);
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_unlink_last(copy)));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_unlink_last(copy)));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_unlink_last(copy)));
	list_delete(list);
	list_delete(copy);
}

void test_list_peek_first(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_peek_first(list)));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_peek_first(list)));
	list_delete(list);
}

void test_list_peek_last(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_peek_last(list)));
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_peek_last(list)));
	list_delete(list);
}

void test_list_peek(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	list_add_first(list, char2ptr('C'));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_peek(list, 2)));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_peek(list, 2)));
	list_delete(list);
}

void test_list_remove_first(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('C'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	list_remove_first(list);
	TEST_ASSERT_EQUAL_CHAR('C', ptr2char(list_peek_first(list)));
	list_delete(list);
}

void test_list_remove_last(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('C'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	list_remove_last(list);
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_peek_last(list)));
	list_delete(list);
}

void test_list_remove(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('C'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	list_remove(list, 2);
	TEST_ASSERT_EQUAL_CHAR('C', ptr2char(list_peek(list, 1)));
	list_remove(list, 1);
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_peek(list, 1)));
}

void test_list_merge_sort(void) {
	t_list *list = list_new(g_type_char);
	list_add_first(list, char2ptr('X'));
	list_add_first(list, char2ptr('r'));
	list_add_last(list, char2ptr('E'));
	list_add_first(list, char2ptr('C'));
	list_merge_sort(list);
	TEST_ASSERT_EQUAL_CHAR('C', ptr2char(list_unlink_first(list)));
	TEST_ASSERT_EQUAL_CHAR('E', ptr2char(list_unlink_first(list)));
	TEST_ASSERT_EQUAL_CHAR('X', ptr2char(list_unlink_first(list)));
	TEST_ASSERT_EQUAL_CHAR('r', ptr2char(list_unlink_first(list)));
	list_delete(list);
}

int suite_list(void) {
	UNITY_BEGIN();
    RUN_TEST(test_list_new);
    RUN_TEST(test_list_add_first);
    RUN_TEST(test_list_add_last);
    RUN_TEST(test_list_unlink_first);
    RUN_TEST(test_list_unlink_last);
    RUN_TEST(test_list_unlink);
    RUN_TEST(test_list_copy);
    RUN_TEST(test_list_peek_first);
    RUN_TEST(test_list_peek_last);
    RUN_TEST(test_list_peek);
    RUN_TEST(test_list_remove_first);
    RUN_TEST(test_list_remove_last);
    RUN_TEST(test_list_remove);
    RUN_TEST(test_list_merge_sort);
    return UNITY_END();
}