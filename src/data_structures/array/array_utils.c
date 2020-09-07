/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 23:26:57 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:42:41 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_grow(t_array *array)
{
	void	**arr;
	size_t	i;

	arr = ds_xmalloc(sizeof(void *) * array->capacity * 2);
	i = 0;
	while (i < array->size)
	{
		arr[i] = array->arr[i];
		i++;
	}
	array->capacity = array->capacity * 2;
	free(array->arr);
	array->arr = arr;
}

void	array_shrink(t_array *array)
{
	void	**arr;
	size_t	i;

	arr = ds_xmalloc(sizeof(void *) * array->size * 2);
	i = 0;
	while (i < array->size)
	{
		arr[i] = array->arr[i];
		i++;
	}
	array->capacity = array->size * 2;
	free(array->arr);
	array->arr = arr;
}
