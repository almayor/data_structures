/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:19:33 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:43:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

t_array	*array_new(const t_type *type)
{
	t_array	*array;

	array = ds_xmalloc(sizeof(t_array));
	array->arr = ds_xmalloc(sizeof(void *) * ARRAY_INIT_CAPACITY);
	array->capacity = ARRAY_INIT_CAPACITY;
	array->size = 0;
	array->type = type;
	return (array);
}
