/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:12:57 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 22:54:47 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "array.h"

void *array_copy_wrapper(const void *arr)
{
	return array_copy(arr);
}

void array_delete_wrapper(void *arr)
{
	array_delete(arr);
}

static const t_type	g_type_array_struct = {
	.name = "array",
	.copy = &array_copy_wrapper,
	.del = &array_delete_wrapper,
};

const t_type		*g_type_array = &g_type_array_struct;
