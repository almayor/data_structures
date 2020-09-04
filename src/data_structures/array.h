/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:32:17 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 16:10:07 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H

# define ARRAY_H

/*
** The initial capacity of an array. 
** @remark Change this if you know that the array will contain many more items
** on average.
*/

# define ARRAY_INIT_CAPACITY	4

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"
# include "ft_printf.h"
# include "queue.h"

/*
** @brief A resizable array holding generic items.
** @details The array will double in size when its capacity is filled,
** and halve its size when only `1/4` of its capacity is used.
** @var s_array::size
** @briefThe number of items in this array
** @var s_array::capacity
** @brief The capacity of this array
** @var s_array::arr
** @brief The data
** @var s_array::type
** @brief The type of items in this array 
*/

typedef struct	s_array
{
	size_t			size;
	size_t			capacity;
	void			**arr;
	const t_type	*type;
}				t_array;

/*
** Deletes this array and free all its items and the associated data. Does
** nothing if the argument is `NULL`.
*/

void			array_delete(t_array *array);

/*
** Returns the item at the specified position in this list.
** @return The item or `NULL` if the index is out of range.
** @param index	The index (0-based counting)
** @exception `EINVAL`  Index is out of range
*/

void			*array_get(const t_array *array, size_t index);

/*
** Replaces the element at the specified position in this array with
** a copy of the specified element.
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
** @param index 	The index (0-based counting)
** @param content	The item to be copied.
** @exception `ENOMEM`	Memory allocation error
** @exception `EINVAL`	Index is out of range
*/

int				array_set(t_array *array, size_t index, const void *content);

/*
** Appends a copy the specified element to the end of this array.
** @param content	The item to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int				array_append(t_array *array, const void *content);

/*
** Removes and returns the element at the end of this array.
** @return The item at the end of this array, or `NULL` if the array is empty.
*/

void			*array_pop(t_array *array);

/*
** Swaps elements at the two specified positions in the array.
** @param ind1	The index of the first element
** @param ind2	The index of the second element
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
*/

int				array_swap(t_array *array, size_t ind1, size_t ind2);

/*
** Returns the number of elements in this array.
** @return the number of elements in this array.
*/

size_t			array_size(const t_array *array);

/*
** Initializes a new empty array.
** @param type	The type of items that this array can hold
** @return The new array, or `NULL` on failure. In case of an error, `errno` is
** set accordingly.
*/

t_array			*array_new(const t_type *type);

/*
** Initializes a new array of the specified size, filled with zeros.
** @param type	The type of items that this array can hold
** @param size	The size
** @return The new array, or `NULL` on failure. In case of an error, `errno` is
** set accordingly.
*/

t_array			*array_zeros(const t_type *type, size_t size);

/*
** Prints a string representation of this array to standard output.
** @remark For this function to work, the datatype in this array must be
** printable (i.e. implement the `print` function). Otherwise, an exception
** will occur.
*/

void			array_print(const t_array *array);

/*
** Deletes the item at the specified index.
** @param index	The index
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
** @note This function has linear complexity in the number of elements in the
** worst-case.
*/

int				array_remove(t_array *array, size_t index);

/*
** Inserts a copy of the specified item at the specified index.
** @param index		The index at which to insert
** @param content	The item to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
** @note This function has linear complexity in the number of elements in the
** worst-case.
*/

int				array_insert(t_array *array, size_t index, const void *content);

/*
** Sorts this array using insertion sort.
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

int				array_insertion_sort(t_array *array);

/*
** Sorts this array using merge sort.
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

int				array_merge_sort(t_array *array);

/*
** Sorts this array using quick sort.
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

int				array_quick_sort(t_array *array);

/*
** Checks if an array is sorted in ascending order.
** @return `1` if the array is sorted, `0` if the array is not sorted,
** `-1` on error. In case of an error, `errno` is set accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

int				array_sorted(const t_array *array);

/*
** Copies the array and all it contents.
** @return The copy of the array or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_array			*array_copy(const t_array *array);

/*
** Returns a queue that contains copies of the element in this array.
** @return The queue representing the array, or `NULL` if an error occured.
** In case of an error, `errno` is set accordingly.
*/

t_queue			*array_to_queue(const t_array *array);

#endif
