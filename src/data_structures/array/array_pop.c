/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:46:05 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 23:28:37 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "array_utils.h"

void			*array_pop(t_array *array)
{
	void	*content;

	if (!array || array->size == 0)
		return (NULL);
	content = array->arr[array->size - 1];
	array->arr[array->size - 1] = NULL;
	array->size--;
	if (array->size <= array->capacity / 4 &&
		array_shrink(array))
		return (NULL);
	return (content);
}
