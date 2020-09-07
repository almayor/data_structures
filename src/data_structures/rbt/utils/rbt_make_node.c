/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_make_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:15:25 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:10:52 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt_utils.h"

t_rbt_node	*rbt_make_node(const t_rbt *rbt, const void *key,
								const void *val, t_rbt_node_color color)
{
	t_rbt_node	*node;

	node = ds_xcalloc(sizeof(t_rbt_node), 1);
	node->color = color;
	node->key = rbt->key_type->copy(key);
	node->val = rbt->val_type->copy(val);
	node->count = 1;
	return (node);
}
