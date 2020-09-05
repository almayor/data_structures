/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:05:33 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 19:10:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

t_rbt	*rbt_new(const t_type *key_type, const t_type *val_type)
{
	t_rbt	*rbt;

	if (!key_type || !key_type->cmp || !val_type)
	{
		errno = EINVAL;
		return (NULL);
	}
	if (!(rbt = ds_calloc(sizeof(t_rbt), 1)))
		return (NULL);
	rbt->key_type = key_type;
	rbt->val_type = val_type;
	return (rbt);
}
