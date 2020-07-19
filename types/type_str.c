/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:21:44 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 20:51:17 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void	*type_str_copy(const void *str)
{
	if (!str)
		return (NULL);
	return (ft_strdup(str));
}

int		type_str_cmp(const void *str1, const void *str2)
{
	return (ft_strcmp(str1, str2));
}

void	type_str_print(const void *str)
{
	ft_printf("%s", str);
}

static const t_type	g_type_str_struct = {
	.name = "str",
	.copy = &type_str_copy,
	.del = &free,
	.cmp = &type_str_cmp,
	.print = &type_str_print,
};

const t_type		*g_type_str = &g_type_str_struct;
