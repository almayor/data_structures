/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 17:00:37 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:50:05 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int	array_sorted(const t_array *array)
{
	size_t	i;

	if (array->type->cmp == NULL)
		ds_exit_set(ENOTSUP);
	i = 0;
	while (i < array->size - 1)
	{
		if (array->type->cmp(array->arr[i], array->arr[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
