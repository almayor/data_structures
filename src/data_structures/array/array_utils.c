/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 23:26:57 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 19:44:28 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int	array_grow(t_array *array)
{
	void	**arr;
	size_t	i;

	if (!(arr = malloc(sizeof(void *) * array->capacity * 2)))
		return (1);
	i = 0;
	while (i < array->size)
	{
		arr[i] = array->arr[i];
		i++;
	}
	array->capacity = array->capacity * 2;
	free(array->arr);
	array->arr = arr;
	return (0);
}

int		array_shrink(t_array *array)
{
	void	**arr;
	size_t	i;

	if (!(arr = malloc(sizeof(void *) * array->size * 2)))
		return (1);
	i = 0;
	while (i < array->size)
	{
		arr[i] = array->arr[i];
		i++;
	}
	array->capacity = array->size * 2;
	free(array->arr);
	array->arr = arr;
	return (0);
}
