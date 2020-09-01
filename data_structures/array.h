/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:32:17 by unite             #+#    #+#             */
/*   Updated: 2020/09/01 17:24:50 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H

# define ARRAY_H

# define ARRAY_INIT_CAPACITY	4

# include "data_structures.h"
# include "queue.h"

typedef struct	s_array
{
	size_t			size;
	size_t			capacity;
	void			**arr;
	const t_type	*type;
}				t_array;

void			array_delete(t_array *array);
void			*array_get(const t_array *array, size_t index);
int				array_set(t_array *array, size_t index, const void *content);
int				array_append(t_array *array, const void *content);
void			*array_pop(t_array *array);
int				array_swap(t_array *array, size_t ind1, size_t ind2);
size_t			array_size(const t_array *array);
t_array			*array_new(const t_type *type);
t_array			*array_zeros(const t_type *type, size_t size);
void			array_print(const t_array *array);
int				array_remove(t_array *array, size_t index);
int				array_insert(t_array *array, size_t index, const void *content);
int				array_insertion_sort(t_array *array);
int				array_merge_sort(t_array *array);
int				array_quick_sort(t_array *array);
int				array_sorted(const t_array *array);
t_array			*array_copy(const t_array *array);
t_queue			*array_to_queue(const t_array *array);

#endif
