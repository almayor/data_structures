/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:18:30 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:49:52 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_swap(t_array *array, size_t ind1, size_t ind2)
{
	void	*content;

	if (!array || ind1 >= array_size(array) || ind2 >= array_size(array))
		ds_exit_set(EINVAL);
	content = array->arr[ind1];
	array->arr[ind1] = array->arr[ind2];
	array->arr[ind2] = content; 
}
