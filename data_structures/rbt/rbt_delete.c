/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 00:24:47 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 13:47:49 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

void	rbt_delete_node(t_rbt *rbt, t_rbt_node *node)
{
	if (node == NULL)
		return ;
	rbt->val_type->del(node->val);
	rbt->key_type->del(node->key);
	free(node);
}

void	rbt_delete_recur(t_rbt *rbt, t_rbt_node *node)
{
	if (node == NULL)
		return ;
	rbt_delete_recur(rbt, node->left);
	rbt_delete_recur(rbt, node->right);
	rbt_delete_node(rbt, node);
}

void	rbt_delete(t_rbt *rbt)
{
	if (rbt == NULL)
		return ;
	rbt_delete_recur(rbt, rbt->root);
	free(rbt);
}
