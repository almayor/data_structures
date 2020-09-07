/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_get.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 23:25:55 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:51:17 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	*array_get(const t_array *array, size_t index)
{
	if (index >= array->size)
		ds_exit_set(EINVAL);
	return (array->arr[index]);
}
