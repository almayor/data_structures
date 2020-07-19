/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_append.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:27:51 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 00:25:09 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "array_utils.h"

int			array_append(t_array *array, const void *content)
{
	if (array->size == array->capacity &&
		array_grow(array))
		return (1);
	if (!(array->arr[array->size] = array->type->copy(content)))
		return (1);
	array->size++;
	return (0);
}
