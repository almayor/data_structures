/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_quick_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 14:38:31 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 17:23:31 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sorts.h"

static size_t	array_partition(t_array *array, size_t lo, size_t hi)
{
	size_t	i;
	size_t	j;

	i = lo;
	j = hi + 1;
	while (1)
	{
		while (array->type->cmp(array->arr[++i], array->arr[lo]) <= 0)
			if (i == hi)
				break ;
		while (array->type->cmp(array->arr[lo], array->arr[--j]) <= 0)
			if (j == lo)
				break ;
		if (i >= j)
			break ;
		array_swap(array, i, j);
	}
	array_swap(array, j, lo);
	return (j);
}

static void		array_quick_sort_recur(t_array *array, size_t lo, size_t hi)
{
	size_t	pivot;

	if (lo >= hi)
		return ;
	pivot = array_partition(array, lo, hi);
	array_quick_sort_recur(array, lo, pivot);
	array_quick_sort_recur(array, pivot + 1, hi);
}

int				array_quick_sort(t_array *array)
{
	if (array->type->cmp == NULL)
	{
		errno = ENOTSUP;
		return (1);
	}
	array_quick_sort_recur(array, 0, array->size - 1);
	return (0);
}
