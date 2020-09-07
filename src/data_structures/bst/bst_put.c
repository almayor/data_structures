/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:09:18 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:44:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

static t_bst_node	*bst_make_node(t_bst *bst, const void *key, const void *val)
{
	t_bst_node	*node;

	node = ds_xcalloc(sizeof(t_bst_node), 1);
	node->key = bst->key_type->copy(key);
	node->val = bst->val_type->copy(val);
	return (node);
}

static t_bst_node	*bst_put_recur(t_bst *bst, t_bst_node *node,
									const void *key, const void *val)
{
	int	cmp;

	if (node == NULL)
		return (bst_make_node(bst, key, val));
	cmp = bst->key_type->cmp(key, node->key);
	if (cmp < 0)
		node->left = bst_put_recur(bst, node->left, key, val);
	else if (cmp > 0)
		node->right = bst_put_recur(bst, node->right, key, val);
	else
	{
		bst->val_type->del(node->val);
		node->val = bst->val_type->copy(val);
	}
	return (node);
}

void				bst_put(t_bst *bst, const void *key, const void *val)
{
	bst->root = bst_put_recur(bst, bst->root, key, val);
	bst->size++;
}
