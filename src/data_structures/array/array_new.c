/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:19:33 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 18:23:08 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

t_array	*array_new(const t_type *type)
{
	t_array	*array;

	if (!(array = malloc(sizeof(t_array))) ||
		!(array->arr = malloc(sizeof(void *) * ARRAY_INIT_CAPACITY)))
	{
		free(array);
		return (NULL);
	}
	array->capacity = ARRAY_INIT_CAPACITY;
	array->size = 0;
	array->type = type;
	return (array);
}
