/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_utils_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:06:26 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 01:40:11 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"
#include "rbt_utils.h"

t_rbt_node	*rbt_make_node(const t_rbt *rbt, const void *key, const void *val,
							t_rbt_node_color color)
{
	t_rbt_node	*node;

	if (!(node = ft_calloc(sizeof(t_rbt_node), 1)))
		return (NULL);
	node->color = color;
	node->key = rbt->key_type->copy(key);
	node->val = rbt->val_type->copy(val);
	node->count = 1;
	return (node);
}

t_rbt_node	*rbt_rotate_left(t_rbt *rbt, t_rbt_node *h)
{
	t_rbt_node	*x;

	x = h->right;
	h->right = x->left;
	x->left = h;
	x->color = h->color;
	h->color = RBT_RED;
	x->count = h->count;
	h->count = 1 + rbt_size_subtree(h->left) + rbt_size_subtree(h->right);
	return (x);
}

t_rbt_node	*rbt_rotate_right(t_rbt *rbt, t_rbt_node *h)
{
	t_rbt_node	*x;

	x = h->left;
	h->left = x->right;
	x->left = h;
	x->color = h->color;
	h->color = RBT_RED;
	x->count = h->count;
	h->count = 1 + rbt_size_subtree(h->left) + rbt_size_subtree(h->right);
	return (x);	
}

void		rbt_flip_color(t_rbt *rbt, t_rbt_node *h)
{
	if (h != rbt->root)
		h->color = RBT_RED;
	h->left->color = RBT_BLACK;
	h->right->color = RBT_BLACK;
}

int			rbt_is_red_node(const t_rbt_node *node)
{
	if (node == NULL)
		return (0);
	return (node->color == RBT_RED);
}
