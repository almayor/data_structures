/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_zeros.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:22:45 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:44:24 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

t_array	*array_zeros(const t_type *type, size_t size)
{
	t_array	*array;

	array = ds_xmalloc(sizeof(t_array));
	array->arr = ds_xcalloc(sizeof(void *), size);
	array->capacity = size;
	array->size = size;
	array->type = type;
	return (array);
}
