/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:17:07 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 01:18:25 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H

# define QUEUE_H

# include "data_structures.h"
# include "list.h"

typedef t_list	t_queue;

int				queue_enqueue(t_queue *queue, const void *data);
void			*queue_dequeue(t_queue *queue);
void			*queue_peek(const t_queue *queue);
void			queue_delete(t_queue *queue);
size_t			queue_size(const t_queue *queue);
t_queue			*queue_new(const t_type *type);
void			queue_print(const t_queue *queue);

#endif
