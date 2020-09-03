/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:00:24 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 00:00:55 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BST_H

# define BST_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"

typedef struct	s_bst_node
{
	void				*key;
	void				*val;
	struct s_bst_node	*left;
	struct s_bst_node	*right;
}				t_bst_node;

typedef struct	s_bst
{
	t_bst_node		*root;
	size_t			size;
	const t_type	*key_type;
	const t_type	*val_type;
}				t_bst;

t_bst			*bst_new(const t_type *key_type, const t_type *val_type);
int				bst_put(t_bst *bst, const void *key, const void *val);
void			*bst_get(const t_bst *bst, const void *key);
size_t			bst_size(const t_bst *bst);
void			bst_delete(t_bst *bst);
size_t			bst_height(const t_bst *bst);

#endif
