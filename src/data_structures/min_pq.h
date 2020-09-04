/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:46:03 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 22:50:13 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_PQ_H

# define MIN_PQ_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "array.h"

/*
** @brief A priority queue of generic keys.
** @details Implemented with a resizing array.
*/

typedef t_array	t_min_pq;

/*
** Initializes a new empty priority queue.
** @param type	The type of items that this queue can hold
** @return The new array, or `NULL` on failure. In case of an error, `errno` is
** set accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

t_min_pq	*min_pq_new(const t_type *type);

/*
** Returns the smallest key in the queue.
** @return The smallest key or `NULL` if the queue is empty.
*/

void		*min_pq_peek(const t_min_pq *pq);

/*
** Removes and returns the smallest key in this queue.
** @return The smallest item in the queue, or `NULL` if the array is empty.
*/

void		*min_pq_pop(t_min_pq *pq);

/*
** Adds a copy of the specified element to the queue.
** @param data	The element to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int			min_pq_add(t_min_pq *pq, const void *data);

/*
** Returns the number of keys in this queue.
** @return the number of keys in this queue.
*/

size_t		min_pq_size(const t_min_pq *pq);

/*
** Deletes this queue and free all its items and the associated data.
*/

void		min_pq_delete(t_min_pq *pq);

/*
** Copies the queue and all it contents.
** @return The copy of the queue or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_min_pq	*min_pq_copy(const t_min_pq *pq);

#endif
