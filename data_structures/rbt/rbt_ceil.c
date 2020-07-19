/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_ceil.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:28:17 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 21:24:15 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

static const t_rbt_node	*rbt_ceil_recur(const t_rbt *rbt, const t_rbt_node *h,
									const void *key)
{
	int					cmp;
	const t_rbt_node	*x;

	if (!h)
		return (NULL);
	cmp = rbt->key_type->cmp(key, h->key);
	if (cmp == 0)
		return (h);
	if (cmp > 0)
		return (rbt_ceil_recur(rbt, h->right, key));
	x = rbt_ceil_recur(rbt, h->left, key);
	return (x ? x : h);
}

void	*rbt_ceil(const t_rbt *rbt, const void *key)
{
	const t_rbt_node	*node;

	if (!rbt || !key)
		return (NULL);
	node = rbt_ceil_recur(rbt, rbt->root, key);
	return (node->key);
}
