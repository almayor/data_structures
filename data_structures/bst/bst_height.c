/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst_height.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:31:04 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:55:40 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bst.h"

static size_t	bst_height_recur(const t_bst *bst, const t_bst_node *node)
{
	size_t	left_height;
	size_t	right_height;

	if (node == NULL)
		return (0);
	left_height = bst_height_recur(bst, node->left);
	right_height = bst_height_recur(bst, node->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

size_t			bst_height(const t_bst *bst)
{
	return (bst_height_recur(bst, bst->root));
}
