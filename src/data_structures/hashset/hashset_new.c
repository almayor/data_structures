/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:35:49 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 19:09:16 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

t_hashset	*hashset_new(const t_type *type)
{
	t_hashset		*hs;

	if (type->hash == NULL)
	{
		errno = EINVAL;
		return (NULL);
	}
	if (!(hs = ds_calloc(sizeof(t_hashset), 1)) ||
		!(hs->vals = ds_calloc(sizeof(void *), HASHSET_INIT_CAPACITY)))
	{
		hashset_delete(hs);
		return (NULL);
	}
	hs->capacity = HASHSET_INIT_CAPACITY;
	hs->type = type;
	return (hs);
}
