/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_enqueue.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:27:31 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:21:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

int	queue_enqueue(t_queue *queue, const void *data)
{
	return (list_add_last(queue, data));
}
