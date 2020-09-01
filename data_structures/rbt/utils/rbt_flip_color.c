/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_flip_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:17:08 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 21:33:42 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbt_utils.h"

void		rbt_flip_color(t_rbt *rbt, t_rbt_node *h)
{
	if (h != rbt->root)
		h->color = RBT_RED;
	h->left->color = RBT_BLACK;
	h->right->color = RBT_BLACK;
}
