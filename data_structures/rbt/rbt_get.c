/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:11:54 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:56:42 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

void	*rbt_get(const t_rbt *rbt, const void *key)
{
	t_rbt_node	*node;
	int			cmp;

	node = rbt->root;
	while (node != NULL)
	{
		cmp = rbt->key_type->cmp(key, node->key);
		if (cmp < 0)
			node = node->left;
		else if (cmp > 0)
			node = node->right;
		else
			return (node->val);
	}
	return (NULL);
}
