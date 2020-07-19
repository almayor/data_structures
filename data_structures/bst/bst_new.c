/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:05:33 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 19:15:41 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

t_bst	*bst_new(const t_type *key_type, const t_type *val_type)
{
	t_bst	*bst;

	if (!key_type->cmp)
	{
		errno = EINVAL;
		return (NULL);
	}
	if (!(bst = ft_calloc(sizeof(t_bst), 1)))
		return (NULL);
	bst->key_type = key_type;
	bst->val_type = val_type;
	return (bst);
}
