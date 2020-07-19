/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_rbt_node.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:21:44 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 20:58:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "rbt.h"

void	*type_rbt_node_copy(const void *node)
{
	t_rbt_node	*node_cpy;

	if (!node || !(node_cpy = malloc(sizeof(t_rbt_node))))
		return (NULL);
	return (ft_memcpy(node_cpy, node, sizeof(t_rbt_node)));
}

static const t_type	g_type_rbt_node_struct = {
	.name = "rbt_node",
	.copy = &type_rbt_node_copy,
	.del = &free,
};

const t_type		*g_type_rbt_node = &g_type_rbt_node_struct;
