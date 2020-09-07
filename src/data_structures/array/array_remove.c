/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 23:34:25 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:50:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "array_utils.h"

void	array_remove(t_array *array, size_t index)
{
	if (index >= array->size)
		ds_exit_set(EINVAL);
	array->type->del(array->arr[index]);
	while (index < array->size - 1)
	{
		array->arr[index] = array->arr[index + 1];
		index++;
	}
	array->size--;
	if (array->size <= array->capacity / 4)
		array_shrink(array);
}
