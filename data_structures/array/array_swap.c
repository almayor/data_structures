/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 14:18:30 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 16:15:10 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

int		array_swap(t_array *array, size_t ind1, size_t ind2)
{
	void	*content;

	if (!array || ind1 >= array_size(array) || ind2 >= array_size(array))
		return (1);
	content = array->arr[ind1];
	array->arr[ind1] = array->arr[ind2];
	array->arr[ind2] = content; 
	return (0);
}
