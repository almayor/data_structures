/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:23:30 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 00:29:24 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

t_array	*array_copy(const t_array *array)
{
	t_array	*copy;
	size_t	i;

	if (!(copy = array_zeros(array->type, array->size)))
		return (NULL);
	i = 0;
	while (i < array->size)
	{
		array_set(copy, i, array_get(array, i));
		i++;
	}
	copy->capacity = array->capacity;
	copy->size = array->size;
	return (copy);
}
