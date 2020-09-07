/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:44:36 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:28:33 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_set(t_array *array, size_t index, const void *content)
{
	if (index >= array->size)
		ds_exit_set(EINVAL);
	array->type->del(array->arr[index]);
	array->arr[index] = array->type->copy(content);
}
