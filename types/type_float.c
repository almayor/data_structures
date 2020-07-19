/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_float.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:27:52 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 20:50:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	*type_float_copy(const void *f)
{
	float	*copy;

	if (!f || !(copy = malloc(sizeof(float))))
		return (NULL);
	*copy = *(float *)f;
	return (copy);
}

int		type_float_cmp(const void *f1, const void *f2)
{
	if (!f1 && !f2)
		return (0);
	if (!f1)
		return (-1);
	if (!f2)
		return (1);
	if (*(float *)f1 < *(float *)f2)
		return (-1);
	if (*(float *)f1 > *(float *)f2)
		return (1);
	return (0);
}

void	type_float_print(const void *f)
{
	if (!f)
		ft_putstr("(null)");
	else
		ft_printf("%f", *(float *)f);
}

static const t_type	g_type_float_struct = {
	.name = "float",
	.copy = &type_float_copy,
	.del = &free,
	.cmp = &type_float_cmp,
	.print = &type_float_print,
};

const t_type		*g_type_float = &g_type_float_struct;
