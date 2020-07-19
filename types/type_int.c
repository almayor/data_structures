/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:27:52 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 20:50:59 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	*type_int_copy(const void *i)
{
	int	*copy;

	if (!i || !(copy = malloc(sizeof(int))))
		return (NULL);
	*copy = *(int *)i;
	return (copy);
}

int		type_int_cmp(const void *i1, const void *i2)
{
	if (!i1 && !i2)
		return (0);
	if (!i1)
		return (-1);
	if (!i2)
		return (1);
	if (*(int *)i1 < *(int *)i2)
		return (-1);
	if (*(int *)i1 > *(int *)i2)
		return (1);
	return (0);
}

void	type_int_print(const void *i)
{
	if (!i)
		ft_putstr("(null)");
	else
		ft_printf("%i", *(int *)i);
}

static const t_type	g_type_int_struct = {
	.name = "int",
	.copy = &type_int_copy,
	.del = &free,
	.cmp = &type_int_cmp,
	.print = &type_int_print,
};

const t_type		*g_type_int = &g_type_int_struct;
