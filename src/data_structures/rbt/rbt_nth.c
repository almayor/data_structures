/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_nth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 23:10:59 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 23:48:13 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"
#include "rbt_utils.h"

void	*rbt_nth_recur(const t_rbt *rbt, const t_rbt_node *node, size_t n)
{
	size_t	rank;

	rank = rbt_size_subtree(node->left);
	if (n == rank)
		return (node->key);
	if (n < rank)
		return (rbt_nth_recur(rbt, node->left, n));
	else 
		return (rbt_nth_recur(rbt, node->right, n - rank - 1));
}

void	*rbt_nth(const t_rbt *rbt, size_t n)
{
	if (n > rbt_size(rbt))
		return (NULL);
	return (rbt_nth_recur(rbt, rbt->root, n));
}
