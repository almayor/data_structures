#include "rbt.h"
#include "array.h"
#include "queue.h"
#include "types.h"
#include "stack.h"
#include "utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void find_next_seed() {
	t_array	*array;
	int 	sorted;

	for (int j = 0; j < 1000; j++)
	{
		array = array_new_size(g_type_int, 50);
		srand(j);
		for (int i = 0; i < 50; i++) {
			array_set(array, i, int2ptr(rand() % 50));
		}
		array_quick_sort(array);
		sorted = array_sorted(array);
		ft_printf("%s with %d\n", sorted ? "Sorted" : "Unsorted", j);
		array_delete(array);
		if (!sorted)
			break ;
	}
}

int main(void)
{
	//t_array *array = array_new_size(g_type_int, 50);
	//
	//srand(0);
	//for (int i = 0; i < 50; i++) {
	//	array_set(array, i, int2ptr(rand() % 50));
	//}
	//array_quick_sort(array);
	//array_print(array);
	//array_delete(array);
	find_next_seed();
}
