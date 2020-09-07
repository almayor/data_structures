/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 00:18:09 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:51:10 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "array_utils.h"

void	array_insert(t_array *array, size_t index, const void *content)
{
	size_t	i;

	if (index >= array->size)
		ds_exit_set(EINVAL);
	if (array->size++ == array->capacity)
		array_grow(array);
	i = array->size;
	while (i-- > index)
		array->arr[i] = array->arr[i - 1];
	array->arr[index] = array->type->copy(content);
}
