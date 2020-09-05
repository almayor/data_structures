/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:17:07 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 18:55:53 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H

# define QUEUE_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "list.h"
# include "utils.h"

/*
** Represents a first-in-first-out (FIFO) queue of generic items.
** This implementation uses a doubly-linked list.
*/

typedef struct s_list	t_queue;

/*
** Copies the item and adds the copy to the queue.
** @param data The item to add
** @return 0 on success, 1 on failure. On failure, `errno` is set to indicate
** the error.
*/

int				queue_enqueue(t_queue *queue, const void *data);

/*
** Removes and returns the item on this queue that was least recently added.
** @return The item that was least recently added, or `NULL` if the queue is
** empty.
*/

void			*queue_dequeue(t_queue *queue);

/*
** Returns the item in this queue that was least recently added. The item is
** kepts on the queue.
** @return The item that was least recently added, or `NULL` if the queue is
** empty.
*/

void			*queue_peek(const t_queue *queue);

/*
** Deletes the queue and frees all memory taken by its contents, or does
** nothing if the argument is `NULL`.
*/

void			queue_delete(t_queue *queue);

/*
** Returns the number of items in this queue.
** @return The number of items in this queue
*/

size_t			queue_size(const t_queue *queue);

/*
** Allocates memory and initializes an empty queue.
** @param the type of items that this queue will hold
** @return `0` on success, `1` on failure. In case of failure,
** `errno` is set accordingly.
*/

t_queue			*queue_new(const t_type *type);

/*
** Copies a queue and all it contents.
** @return The copy of the queue or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_queue			*queue_copy(const t_queue *queue);

#endif
