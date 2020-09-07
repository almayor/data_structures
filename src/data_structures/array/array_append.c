/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_append.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:27:51 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 19:53:27 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "array_utils.h"

void	array_append(t_array *array, const void *content)
{
	if (array->size == array->capacity)
		array_grow(array);
	array->arr[array->size] = array->type->copy(content);
	array->size++;
}
