/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:46:03 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 18:55:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_PQ_H

# define MAX_PQ_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "array.h"
# include "utils.h"

/*
** @brief A priority queue of generic keys.
** @details Implemented with a resizing array.
*/

typedef t_array	t_max_pq;

/*
** Initializes a new empty priority queue.
** @param type	The type of items that this queue can hold
** @return The new array, or `NULL` on failure. In case of an error, `errno` is
** set accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

t_max_pq	*max_pq_new(const t_type *type);

/*
** Returns the largest key in the queue.
** @return The largest key or `NULL` if the queue is empty.
*/

void		*max_pq_peek(const t_max_pq *pq);

/*
** Removes and returns the largest key in this queue.
** @return The largest item in the queue, or `NULL` if the array is empty.
*/

void		*max_pq_pop(t_max_pq *pq);

/*
** Adds a copy of the specified element to the queue.
** @param data	The element to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int			max_pq_add(t_max_pq *pq, const void *data);

/*
** Returns the number of keys in this queue.
** @return the number of keys in this queue.
*/

size_t		max_pq_size(const t_max_pq *pq);

/*
** Deletes this queue and free all its items and the associated data.
*/

void		max_pq_delete(t_max_pq *pq);

/*
** Copies the queue and all it contents.
** @return The copy of the queue or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_max_pq	*max_pq_copy(const t_max_pq *pq);

#endif
