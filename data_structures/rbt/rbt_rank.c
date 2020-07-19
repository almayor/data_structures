/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_rank.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 00:35:28 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 00:45:00 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"
#include "rbt_utils.h"

static size_t	rbt_rank_recur(const t_rbt *rbt, const t_rbt_node *node,
								const void *key)
{
	int	cmp;

	if (node == NULL)
		return (0);
	cmp = rbt->key_type->cmp(key, node->key);
	if (cmp < 0)
		return (rbt_rank_recur(rbt, node->left, key));
	if (cmp > 0)
		return (1 +
			rbt_size_subtree(node->left) +
			rbt_rank_recur(rbt, node->right, key));
	return (rbt_size_subtree(node->left));
}

size_t			rbt_rank(const t_rbt *rbt, const void *key)
{
	return (rbt_rank_recur(rbt, rbt->root, key));
}
