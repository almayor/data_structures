/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:35:49 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:57:52 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

t_hashset	*hashset_new(const t_type *type)
{
	t_hashset		*hs;

	if (type->hash == NULL)
		ds_exit_set(EINVAL);
	hs = ds_xcalloc(sizeof(t_hashset), 1);
	hs->vals = ds_xcalloc(sizeof(void *), HASHSET_INIT_CAPACITY);
	hs->capacity = HASHSET_INIT_CAPACITY;
	hs->type = type;
	return (hs);
}
