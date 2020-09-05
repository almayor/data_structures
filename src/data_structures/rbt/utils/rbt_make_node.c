/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_make_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:15:25 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 19:10:47 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt_utils.h"

t_rbt_node	*rbt_make_node(const t_rbt *rbt, const void *key,
								const void *val, t_rbt_node_color color)
{
	t_rbt_node	*node;

	if (!(node = ds_calloc(sizeof(t_rbt_node), 1)))
		return (NULL);
	node->color = color;
	node->key = rbt->key_type->copy(key);
	node->val = rbt->val_type->copy(val);
	node->count = 1;
	return (node);
}
