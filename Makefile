# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: unite <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/05 18:17:42 by unite             #+#    #+#              #
#    Updated: 2020/09/05 20:22:41 by unite            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = data_structures.a

SRC_NAME = \
data_structures/array/array_append.c \
data_structures/array/array_copy.c \
data_structures/array/array_delete.c \
data_structures/array/array_get.c \
data_structures/array/array_insert.c \
data_structures/array/array_insertion_sort.c \
data_structures/array/array_merge_sort.c \
data_structures/array/array_new.c \
data_structures/array/array_pop.c \
data_structures/array/array_quick_sort.c \
data_structures/array/array_remove.c \
data_structures/array/array_set.c \
data_structures/array/array_size.c \
data_structures/array/array_sorted.c \
data_structures/array/array_swap.c \
data_structures/array/array_to_queue.c \
data_structures/array/array_utils.c \
data_structures/array/array_zeros.c \
data_structures/bst/bst_delete.c \
data_structures/bst/bst_get.c \
data_structures/bst/bst_height.c \
data_structures/bst/bst_new.c \
data_structures/bst/bst_put.c \
data_structures/bst/bst_size.c \
data_structures/graph/graph_add_edge.c \
data_structures/graph/graph_add_vertex.c \
data_structures/graph/graph_adjacency.c \
data_structures/graph/graph_adjacent.c \
data_structures/graph/graph_delete.c \
data_structures/graph/graph_new.c \
data_structures/graph/graph_vertices.c \
data_structures/hashmap/hashmap_contains.c \
data_structures/hashmap/hashmap_delete.c \
data_structures/hashmap/hashmap_get.c \
data_structures/hashmap/hashmap_keys.c \
data_structures/hashmap/hashmap_new.c \
data_structures/hashmap/hashmap_put.c \
data_structures/hashmap/hashmap_remove.c \
data_structures/hashmap/hashmap_size.c \
data_structures/hashmap/hashmap_utils.c \
data_structures/hashmap/hashmap_vals.c \
data_structures/hashset/hashset_contains.c \
data_structures/hashset/hashset_copy.c \
data_structures/hashset/hashset_delete.c \
data_structures/hashset/hashset_new.c \
data_structures/hashset/hashset_put.c \
data_structures/hashset/hashset_remove.c \
data_structures/hashset/hashset_size.c \
data_structures/hashset/hashset_utils.c \
data_structures/hashset/hashset_vals.c \
data_structures/list/list_add_first.c \
data_structures/list/list_add_last.c \
data_structures/list/list_copy.c \
data_structures/list/list_delete.c \
data_structures/list/list_merge_sort.c \
data_structures/list/list_new.c \
data_structures/list/list_peek.c \
data_structures/list/list_peek_first.c \
data_structures/list/list_peek_last.c \
data_structures/list/list_remove.c \
data_structures/list/list_remove_first.c \
data_structures/list/list_remove_last.c \
data_structures/list/list_size.c \
data_structures/list/list_unlink.c \
data_structures/list/list_unlink_first.c \
data_structures/list/list_unlink_last.c \
data_structures/max_pq/max_pq_add.c \
data_structures/max_pq/max_pq_copy.c \
data_structures/max_pq/max_pq_delete.c \
data_structures/max_pq/max_pq_new.c \
data_structures/max_pq/max_pq_peek.c \
data_structures/max_pq/max_pq_pop.c \
data_structures/max_pq/max_pq_size.c \
data_structures/min_pq/min_pq_add.c \
data_structures/min_pq/min_pq_copy.c \
data_structures/min_pq/min_pq_delete.c \
data_structures/min_pq/min_pq_new.c \
data_structures/min_pq/min_pq_peek.c \
data_structures/min_pq/min_pq_pop.c \
data_structures/min_pq/min_pq_size.c \
data_structures/queue/queue_copy.c \
data_structures/queue/queue_delete.c \
data_structures/queue/queue_dequeue.c \
data_structures/queue/queue_enqueue.c \
data_structures/queue/queue_new.c \
data_structures/queue/queue_peek.c \
data_structures/queue/queue_size.c \
data_structures/rbt/rbt_ceil.c \
data_structures/rbt/rbt_contains.c \
data_structures/rbt/rbt_delete.c \
data_structures/rbt/rbt_floor.c \
data_structures/rbt/rbt_get.c \
data_structures/rbt/rbt_height.c \
data_structures/rbt/rbt_keys.c \
data_structures/rbt/rbt_max.c \
data_structures/rbt/rbt_min.c \
data_structures/rbt/rbt_new.c \
data_structures/rbt/rbt_put.c \
data_structures/rbt/rbt_rank.c \
data_structures/rbt/rbt_size.c \
data_structures/rbt/rbt_vals.c \
data_structures/rbt/utils/rbt_flip_color.c \
data_structures/rbt/utils/rbt_is_red_node.c \
data_structures/rbt/utils/rbt_make_node.c \
data_structures/rbt/utils/rbt_rotate_left.c \
data_structures/rbt/utils/rbt_rotate_right.c \
data_structures/rbt/utils/rbt_size_subtree.c \
data_structures/stack/stack_copy.c \
data_structures/stack/stack_delete.c \
data_structures/stack/stack_new.c \
data_structures/stack/stack_peek.c \
data_structures/stack/stack_pop.c \
data_structures/stack/stack_push.c \
data_structures/stack/stack_size.c \
data_structures/union_find/union_find_count.c \
data_structures/union_find/union_find_delete.c \
data_structures/union_find/union_find_find.c \
data_structures/union_find/union_find_new.c \
data_structures/union_find/union_find_size.c \
data_structures/union_find/union_find_union.c \
types/data2ptr.c \
types/ptr2data.c \
types/type_array.c \
types/type_char.c \
types/type_float.c \
types/type_hashset.c \
types/type_int.c \
types/type_str.c \
utils/ds_bzero.c \
utils/ds_calloc.c \
utils/ds_strcmp.c \
utils/ds_strdup.c \
utils/ds_strlen.c \

TEST_NAME = unit_tests

TEST_SRC_NAME = \
Unity/unity.c \
main.c \
suite_array.c \
suite_bst.c \
suite_graph.c \
suite_hashmap.c \
suite_hashset.c \
suite_list.c \
suite_max_pq.c \
suite_min_pq.c \
suite_queue.c \
suite_rbt.c \
suite_stack.c \
suite_union_find.c \

################################################################################

PATHS = src
PATHO = obj
PATHI = \
src/data_structures \
src/data_structures/rbt \
src/data_structures/array \
src/data_structures/hashset \
src/data_structures/hashmap \
src/types \
src/utils \

TEST_PATH = test
TEST_PATHS = $(TEST_PATH)/src
TEST_PATHO = $(TEST_PATH)/obj
TEST_PATHI = $(TEST_PATH)/src/Unity

################################################################################

CC = gcc
RM = rm
MKDIR = /bin/mkdir

################################################################################

COMPILE = $(CC) -c
LINK = $(CC)

CFLAGS += -Werror
CFLAGS += -O3 -std=gnu11 -ffast-math -march=native
CFLAGS += -MMD
CFLAGS += $(foreach path, $(PATHI) $(TEST_PATHI), -I$(path))

################################################################################

ifeq ($(DEBUG), 1) 
	COMPILE += -g
endif

################################################################################

SRC = $(patsubst %.c, $(PATHS)/%.c, $(SRC_NAME))
OBJ = $(patsubst %.c, $(PATHO)/%.o, $(SRC_NAME))

TEST_SRC = $(patsubst %.c, $(TEST_PATHS)/%.c, $(TEST_SRC_NAME))
TEST_OBJ = $(patsubst %.c, $(TEST_PATHO)/%.o, $(TEST_SRC_NAME))

TEST_BIN = $(TEST_PATH)/$(TEST_NAME)

################################################################################

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(TEST_BIN) : $(TEST_OBJ) $(OBJ)
	$(LINK) $^ -o $@

################################################################################

$(PATHO)/%.o : $(PATHS)/%.c
	$(MKDIR) -p $(@D)
	$(COMPILE) $(CFLAGS) $< -o $@

$(TEST_PATHO)/%.o : $(TEST_PATHS)/%.c
	$(MKDIR) -p $(@D)
	$(COMPILE) $(CFLAGS) $< -o $@

################################################################################

DEP += $(patsubst %.c, $(PATHO)/%.d, $(SRC_NAME))
DEP += $(patsubst %.c, $(TEST_PATHO)/%.d, $(TEST_SRC_NAME))

-include $(DEP)

################################################################################

.DEFAULT_GOAL = all

.PHONY : all clean fclean re test

all : $(NAME)

fclean : clean
	$(RM) -f $(NAME) $(TEST_BIN)

clean :
	$(RM) -rf $(PATHO)
	$(RM) -rf $(TEST_PATHO)
	$(RM) -f $(TEST_BIN)

re : fclean all

test: all $(TEST_BIN)
	./$(TEST_BIN)

################################################################################

