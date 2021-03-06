/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_char.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:27:52 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 22:54:36 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

void				*type_char_copy(const void *c)
{
	char	*copy;

	if (!c || !(copy = malloc(sizeof(char))))
		return (NULL);
	*copy = *(char *)c;
	return (copy);
}

int					type_char_cmp(const void *c1, const void *c2)
{
	if (!c1 && !c2)
		return (0);
	if (!c1)
		return (-1);
	if (!c2)
		return (-1);
	if (*(char *)c1 < *(char *)c2)
		return (-1);
	if (*(char *)c1 > *(char *)c2)
		return (1);
	return (0);
}

size_t				type_char_hash(const void *c, size_t M)
{
	return (*(size_t *)c % M);
}

static const t_type	g_type_char_struct = {
	.name = "char",
	.copy = &type_char_copy,
	.del = &free,
	.cmp = &type_char_cmp,
	.hash = &type_char_hash,
};

const t_type		*g_type_char = &g_type_char_struct;

