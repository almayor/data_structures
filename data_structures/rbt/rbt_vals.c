/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_vals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:08:44 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 21:31:04 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt.h"

static void	rbt_inorder_recur(const t_rbt *rbt,
								const t_rbt_node *node, t_queue *queue)
{
	if (node == NULL)
		return ;
	rbt_inorder_recur(rbt, node->left, queue);
	queue_enqueue(queue, node->val);
	rbt_inorder_recur(rbt, node->right, queue);
}

t_queue		*rbt_vals(const t_rbt *rbt)
{
	t_queue		*queue;

	if (!(queue = queue_new(rbt->val_type)))
		return (NULL);
	rbt_inorder_recur(rbt, rbt->root, queue);
	return (queue);
}
