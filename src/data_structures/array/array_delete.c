/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:56:40 by unite             #+#    #+#             */
/*   Updated: 2020/07/16 23:58:34 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_delete(t_array *array)
{
	size_t	i;

	if (array)
	{
		if (array->arr)
		{
			i = 0;
			while (i < array->size)
			{
				array->type->del(array->arr[i]);
				i++;
			}
			free(array->arr);
		}
		free(array);
	}
}
