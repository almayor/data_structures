/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 00:46:54 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:37:14 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "queue.h"

size_t	queue_size(const t_queue *queue)
{
	return (list_size(queue));
}
