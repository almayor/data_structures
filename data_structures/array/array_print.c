/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:42:58 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 01:18:01 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_print(const t_array *array)
{
	size_t	i;

	if (array == NULL)
	{
		ft_putstr("(null)\n");
		return ;
	}
	if (array->type->print == NULL)
	{
		errno = ENOTSUP;
		return ;
	}
	i = 0;
	while (i < array->size)
	{
		array->type->print(array_get(array, i));
		if (i < array->size - 1)
			ft_putstr(", ");
		i++;
	}
	ft_putchar('\n');
}
