/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:05:33 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:09:27 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

t_rbt	*rbt_new(const t_type *key_type, const t_type *val_type)
{
	t_rbt	*rbt;

	if (!key_type || !key_type->cmp || !val_type)
		ds_exit_set(EINVAL);
	rbt = ds_xcalloc(sizeof(t_rbt), 1);
	rbt->key_type = key_type;
	rbt->val_type = val_type;
	return (rbt);
}
