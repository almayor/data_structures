/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_hash_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 00:12:57 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:45:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "hashset.h"

void *hashset_copy_wrapper(const void *hs)
{
	return hashset_copy(hs);
}

void hashset_delete_wrapper(void *hs)
{
	hashset_delete(hs);
}

static const t_type	g_type_hashset_struct = {
	.name = "hashset",
	.copy = &hashset_copy_wrapper,
	.del = &hashset_delete_wrapper,
};

const t_type		*g_type_hashset = &g_type_hashset_struct;
