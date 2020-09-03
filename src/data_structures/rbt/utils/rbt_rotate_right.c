/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_rotate_right.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:16:35 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 21:33:44 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt_utils.h"

t_rbt_node	*rbt_rotate_right(t_rbt *rbt, t_rbt_node *h)
{
	t_rbt_node	*x;

	x = h->left;
	h->left = x->right;
	x->right = h;
	x->color = h->color;
	h->color = RBT_RED;
	x->count = h->count;
	h->count = 1 + rbt_size_subtree(h->left) + rbt_size_subtree(h->right);
	return (x);	
}
