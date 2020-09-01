/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:41:50 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 15:53:52 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RBT_H

# define RBT_H

# include "data_structures.h"
# include "queue.h"

typedef enum	e_rbt_node_color
{
	RBT_RED, RBT_BLACK
}				t_rbt_node_color;

typedef struct	s_rbt_node
{
	void				*key;
	void				*val;
	struct s_rbt_node	*left;
	struct s_rbt_node	*right;
	t_rbt_node_color	color;
	size_t				count;
}				t_rbt_node;

typedef struct	s_rbt
{
	t_rbt_node		*root;
	const t_type	*key_type;
	const t_type	*val_type;	
}				t_rbt;

t_rbt			*rbt_new(const t_type *key_type, const t_type *val_type);
int				rbt_put(t_rbt *rbt, const void *key, const void *val);
void			*rbt_get(const t_rbt *rbt, const void *key);
size_t			rbt_size(const t_rbt *rbt);
void			rbt_delete(t_rbt *rbt);
size_t			rbt_height(const t_rbt *rbt);
void			rbt_print(const t_rbt *rbt);
void			*rbt_min(const t_rbt *rbt);
void			*rbt_max(const t_rbt *rbt);
void			*rbt_floor(const t_rbt *rbt, const void *key);
void			*rbt_ceil(const t_rbt *rbt, const void *key);
size_t			rbt_rank(const t_rbt *rbt, const void *key);
t_queue			*rbt_keys(const t_rbt *rbt);
t_queue			*rbt_vals(const t_rbt *rbt);
int				rbt_contains(const t_rbt *rbt, const void *key);

#endif
