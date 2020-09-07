/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_put.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:58:58 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:57:15 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

void	hashset_put(t_hashset *hs, const void *val)
{
	size_t	i;

	i = hs->type->hash(val, hs->capacity);
	while (hs->vals[i] != NULL)
	{
		if (hs->type->cmp(hs->vals[i], val) == 0)
			return ;
		i = (i + 1) % hs->capacity;
	}
	hs->vals[i] = hs->type->copy(val);
	hs->size++;
	if (hs->size >= hs->capacity / 2)
		hashset_grow(hs);
}
