/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_contains.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:53:13 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 22:50:14 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

int		hashset_contains(const t_hashset *hs, const void *val)
{
	size_t	ind;

	ind = hs->type->hash(val, hs->capacity);
	while (hs->vals[ind] != NULL)
	{
		if (hs->type->cmp(hs->vals[ind], val) == 0)
			return (1);
		ind = (ind + 1) % hs->capacity;
	}
	return (0);
}
