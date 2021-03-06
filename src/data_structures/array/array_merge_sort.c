/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_merge_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:38:23 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:50:50 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

static void array_copy_slice(t_array *array, t_array *aux, size_t lo, size_t hi)
{
	size_t	i;

	i = 0;
	while (i < hi - lo)
	{
		array_set(array, lo + i, array_get(aux, i));
		i++;
	}
}

static void	array_merge(t_array *array, t_array *aux, size_t lo, size_t sz)
{
	size_t	mi;
	size_t	hi;
	size_t	i;
	size_t	j;
	size_t	k;

	mi = lo + sz;
	hi = mi + sz > array->size ? array->size : mi + sz;
	i = lo;
	j = mi;
	k = 0;
	while (k < hi - lo)
	{
		if (!(j < hi))
			array_set(aux, k++, array_get(array, i++));
		else if (!(i < mi))
			array_set(aux, k++, array_get(array, j++));
		else if (array->type->cmp(array_get(array, i), array_get(array, j)) < 0)
			array_set(aux, k++, array_get(array, i++));
		else
			array_set(aux, k++, array_get(array, j++));
	}
	array_copy_slice(array, aux, lo, hi);
}

static void array_merge_sort_iter(t_array *array, t_array *aux)
{
	size_t	sz;
	size_t	lo;

	sz = 1;
	while (sz < array->size)
	{
		lo = 1;
		while (lo < array->size - sz)
		{
			array_merge(array, aux, lo, sz);
			lo += sz;
		}
		sz *= 2;
	}
}

void		array_merge_sort(t_array *array)
{
	t_array *aux;

	if (array->type->cmp == NULL)
		ds_exit_set(ENOTSUP);
	if (array->size <= 7)
		array_insertion_sort(array);
	else
	{
		aux = array_zeros(array->type, array->size);
		array_merge_sort_iter(array, aux);
		array_delete(aux);
	}
}
