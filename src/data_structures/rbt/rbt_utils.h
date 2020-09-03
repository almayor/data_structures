/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:53:08 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 21:31:21 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RBT_MAP_UTILS_H

# define RBT_MAP_UTILS_H

# include "rbt.h"

t_rbt_node	*rbt_make_node(const t_rbt *rbt, const void *key,
								const void *val, t_rbt_node_color color);
t_rbt_node	*rbt_rotate_left(t_rbt *rbt, t_rbt_node *h);
t_rbt_node	*rbt_rotate_right(t_rbt *rbt, t_rbt_node *h);
void		rbt_flip_color(t_rbt *rbt, t_rbt_node *h);
int			rbt_is_red_node(const t_rbt_node *node);
size_t		rbt_size_subtree(const t_rbt_node *node);

#endif
