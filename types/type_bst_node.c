/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_bst_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:21:44 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 20:56:36 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "bst.h"

void	*type_bst_node_copy(const void *node)
{
	t_bst_node	*node_cpy;

	if (!node || !(node_cpy = malloc(sizeof(t_bst_node))))
		return (NULL);
	return (ft_memcpy(node_cpy, node, sizeof(t_bst_node)));
}

static const t_type	g_type_bst_node_struct = {
	.name = "bst_node",
	.copy = &type_bst_node_copy,
	.del = &free,
};

const t_type		*g_type_bst_node = &g_type_bst_node_struct;
