/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_add.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:58:58 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 02:01:55 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

int	hashset_put(t_hashset *hs, const void *val)
{
	size_t	i;

	if (hs->size >= hs->capacity && hashset_grow(hs))
		return (1);
	i = hashset_index(hs, val);
	if (hs->vals[i] != NULL)
		hs->type->del(hs->vals[i]);
	hs->vals[i] = hs->type->copy(val);
	hs->size++;
	return (0);
}
