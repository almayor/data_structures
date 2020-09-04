/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 19:16:19 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 20:03:14 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

void	*rbt_min(const t_rbt *rbt)
{
	t_rbt_node	*node;

	if (!rbt->root)
		return (NULL);
	node = rbt->root;
	while (node->left)
		node = node->left;
	return (node->key);
}
