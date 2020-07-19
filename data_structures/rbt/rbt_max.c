/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:17:38 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 20:13:31 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

void	*rbt_max(const t_rbt *rbt)
{
	t_rbt_node	*node;

	if (!rbt->root)
		return (NULL);
	node = rbt->root;
	while (node->right)
		node = node->right;
	return (node->val);
}
