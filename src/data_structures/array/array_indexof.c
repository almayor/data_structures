/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_indexof.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:24:52 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 23:41:04 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

ssize_t		array_indexof(const t_array *array, const void *val)
{
	size_t	i;

	if (array->type->cmp == NULL)
		ds_exit_set(EINVAL);
	i = 0;
	while (i < array->size)
	{
		if (array->type->cmp(array->arr[i], val) == 0)
			return (i);
		i++;
	}
	return (-1);
}
