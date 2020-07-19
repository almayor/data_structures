/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:44:36 by unite             #+#    #+#             */
/*   Updated: 2020/07/16 23:56:16 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int		array_set(t_array *array, size_t index, const void *content)
{
	if (index >= array->size)
	{
		errno = EINVAL;
		return (-1);
	}
	array->type->del(array->arr[index]);
	if (!(array->arr[index] = array->type->copy(content)))
		return (-1);
	return (0);
}
