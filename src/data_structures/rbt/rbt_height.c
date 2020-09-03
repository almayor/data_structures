/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_height.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 14:34:08 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:56:37 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

static size_t	rbt_height_recur(const t_rbt *rbt, const t_rbt_node *node)
{
	size_t	left_height;
	size_t	right_height;

	if (node == NULL)
		return (0);
	left_height = rbt_height_recur(rbt, node->left);
	right_height = rbt_height_recur(rbt, node->right);
	return (1 + (left_height > right_height ? left_height : right_height));
}

size_t			rbt_height(const t_rbt *rbt)
{
	return (rbt_height_recur(rbt, rbt->root));
}
