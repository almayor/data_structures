/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 13:46:33 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:09:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"
#include "rbt_utils.h"

static t_rbt_node	*rbt_put_recur(t_rbt *rbt, t_rbt_node *node,
									const void *key, const void *val)
{
	int	cmp;

	if (node == NULL)
		return (rbt_make_node(rbt, key, val, RBT_RED));
	cmp = rbt->key_type->cmp(key, node->key);
	if (cmp < 0)
		node->left = rbt_put_recur(rbt, node->left, key, val);
	else if (cmp > 0)
		node->right = rbt_put_recur(rbt, node->right, key, val);
	else
	{
		rbt->val_type->del(node->val);
		node->val = rbt->val_type->copy(val);
	}
	if (rbt_is_red_node(node->right) && !rbt_is_red_node(node->left))
		node = rbt_rotate_left(rbt, node);
	if (rbt_is_red_node(node->left) && rbt_is_red_node(node->left->left))
		node = rbt_rotate_right(rbt, node);
	if (rbt_is_red_node(node->left) && rbt_is_red_node(node->right))
		rbt_flip_color(rbt, node);
	node->count = 1 +
		rbt_size_subtree(node->left) + rbt_size_subtree(node->right);
	return (node);
}

void				rbt_put(t_rbt *rbt, const void *key, const void *val)
{
	rbt->root = rbt_put_recur(rbt, rbt->root, key, val);
}
