/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 00:24:47 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 00:28:45 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

void	bst_delete_node(t_bst *bst, t_bst_node *node)
{
	if (node == NULL)
		return ;
	bst->val_type->del(node->val);
	bst->key_type->del(node->key);
	free(node);
}

void	bst_delete_recur(t_bst *bst, t_bst_node *node)
{
	if (node == NULL)
		return ;
	bst_delete_recur(bst, node->left);
	bst_delete_recur(bst, node->right);
	bst_delete_node(bst, node);
}

void	bst_delete(t_bst *bst)
{
	if (bst == NULL)
		return ;
	bst_delete_recur(bst, bst->root);
	free(bst);
}
