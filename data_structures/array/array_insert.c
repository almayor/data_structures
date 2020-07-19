/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 00:18:09 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 00:23:43 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "array_utils.h"

int	array_insert(t_array *array, size_t index, const void *content)
{
	size_t	i;

	if (index >= array->size)
	{
		errno = EINVAL;
		return (1);
	}
	if (array->size == array->capacity && array_grow(array))
		return (1);
	i = index;
	while (i < array->size)
	{
		array->arr[i + 1] = array->arr[i];
		i++;
	}
	if (!(array->arr[index] = array->type->copy(content)))
		return (1);
	array->size++;
	return (0);
}
