/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:21:44 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 23:04:16 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void		*type_str_copy(const void *str)
{
	if (!str)
		return (NULL);
	return (ft_strdup(str));
}

int			type_str_cmp(const void *str1, const void *str2)
{
	return (ft_strcmp(str1, str2));
}

size_t		type_str_hash(const void *str, size_t M)
{
	size_t		hash;
	char		*s;

	hash = 0;
	s = (char *)str;
	while (*s)
	{
		hash = ((hash << 6) - hash + *s) % M;
		s++;
	}
	return (hash);
}

static const t_type	g_type_str_struct = {
	.name = "str",
	.copy = &type_str_copy,
	.del = &free,
	.cmp = &type_str_cmp,
	.hash = &type_str_hash,
};

const t_type		*g_type_str = &g_type_str_struct;
