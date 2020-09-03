/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:58:58 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 22:08:07 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

int	hashset_put(t_hashset *hs, const void *val)
{
	size_t	i;

	i = hs->type->hash(val, hs->capacity);
	while (hs->vals[i] != NULL)
	{
		if (hs->type->cmp(hs->vals[i], val) == 0)
			return (0);
		i = (i + 1) % hs->capacity;
	}
	hs->vals[i] = hs->type->copy(val);
	hs->size++;
	if (hs->size >= hs->capacity / 2)
		return (hashset_grow(hs));
	return (0);
}
