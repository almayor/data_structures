/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_insertion_sort.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 16:16:40 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:50:59 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

static void	array_insert_next(t_array *array, size_t j)
{
	while (j > 0)
	{
		if (array->type->cmp(array_get(array, j), array_get(array, j - 1)) < 0)
			array_swap(array, j, j - 1);
		else
			break ;
		j--;
	}
}

void		array_insertion_sort(t_array *array)
{
	size_t	i;
	size_t	j;

	if (array->type->cmp == NULL)
		ds_exit_set(ENOTSUP);
	i = 0;
	while (i < array->size - 1)
	{
		if (array->type->cmp(array_get(array, i), array_get(array, i + 1)) > 0)
			array_insert_next(array, i + 1);
		i++;
	}
}
