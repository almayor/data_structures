/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_to_queue.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 15:20:39 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 15:23:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

t_queue		*array_to_queue(const t_array *array)
{
	t_queue	*queue;
	size_t	i;

	if (!(queue = queue_new(array->type)))
		return (NULL);
	i = 0;
	while (i < array->size)
	{
		if (queue_enqueue(queue, array->arr[i]))
		{
			queue_delete(queue);
			return (NULL);
		}
		i++;
	}
	return (queue);
}
