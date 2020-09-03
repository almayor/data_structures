/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:11:54 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:55:22 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

void	*bst_get(const t_bst *bst, const void *key)
{
	t_bst_node	*node;
	int			cmp;

	node = bst->root;
	while (node != NULL)
	{
		cmp = bst->key_type->cmp(key, node->key);
		if (cmp < 0)
			node = node->left;
		else if (cmp > 0)
			node = node->right;
		else
			return (node->val);
	}
	return (NULL);
}
