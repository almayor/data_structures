/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_new_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:22:45 by unite             #+#    #+#             */
/*   Updated: 2020/07/16 23:48:01 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

t_array	*array_new_size(const t_type *type, size_t size)
{
	t_array	*array;

	if (!(array = malloc(sizeof(t_array))) ||
		!(array->arr = ft_calloc(sizeof(void *), size)))
	{
		free(array);
		return (NULL);
	}
	array->capacity = size;
	array->size = size;
	array->type = type;
	return (array);
}
