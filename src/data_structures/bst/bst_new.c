/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:05:33 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:51:40 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

t_bst	*bst_new(const t_type *key_type, const t_type *val_type)
{
	t_bst	*bst;

	if (!key_type->cmp)
		ds_exit_set(EINVAL);
	bst = ds_xcalloc(sizeof(t_bst), 1);
	bst->key_type = key_type;
	bst->val_type = val_type;
	return (bst);
}
