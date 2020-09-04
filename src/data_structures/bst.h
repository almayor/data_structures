/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 22:00:24 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 16:09:43 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BST_H

# define BST_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"

/*
** @brief A node in a binary search tree
** @var s_bst_node::key
** @brief The key
** @var s_bst_node::val
** @brief The value
** @var s_bst_node::left
** @brief The left child
** @var s_bst_node::right
** @brief The right child
*/

typedef struct	s_bst_node
{
	void				*key;
	void				*val;
	struct s_bst_node	*left;
	struct s_bst_node	*right;
}				t_bst_node;

/*
** @brief Binary search tree
** @var s_bst::root
** @brief The root of the tree
** @var s_bst::size
** @brief The number of elements in this tree
** @var s_bst::key_type
** @brief The type of keys in the tree
** @var s_bst::val_type
** @brief The type of values in the ree
*/

typedef struct	s_bst
{
	t_bst_node		*root;
	size_t			size;
	const t_type	*key_type;
	const t_type	*val_type;
}				t_bst;

/*
** Initializes a new empty tree
** @param key_type	The type of keys
** @param val_type	The type of values
** @return The new tree, or `NULL` on failure. In case of an error, `errno` is
** set accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

t_bst			*bst_new(const t_type *key_type, const t_type *val_type);

/*
** Adds a new item to the tree or overwrites an existing one
** @param key	The key to be copied
** @param val	The value to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int				bst_put(t_bst *bst, const void *key, const void *val);

/*
** Returns the value associated with a specified key.
** @param key	The key to search for
** @return The value associated with the key, or `NULL` if the key is not in
** the tree.
*/

void			*bst_get(const t_bst *bst, const void *key);

/*
** Returns the number of elements in this tree.
** @return the number of elements in this tree.
*/


size_t			bst_size(const t_bst *bst);

/*
** Deletes this tree and free all its items and the associated data. Does
** nothing if the argument is `NULL`.
*/

void			bst_delete(t_bst *bst);

/*
** Returns the number of tiers in the tree.
** @return The number of tiers
*/

size_t			bst_height(const t_bst *bst);

#endif
