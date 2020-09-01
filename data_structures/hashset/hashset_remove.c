/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:59:47 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:50:51 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

int	hashset_remove(t_hashset *hs, const void *val)
{
	size_t	i;

	i = hashset_index(hs, val);
	if (hs->vals[i] == NULL)
		return (1);
	hs->type->del(hs->vals[i]);
	hs->vals[i] = NULL;
	hs->size--;
	if (hs->capacity > HASHSET_INIT_CAPACITY &&
		hs->size <= hs->capacity / 4 &&
		hashset_shrink(hs))
		return (1);
	return (0);
}

