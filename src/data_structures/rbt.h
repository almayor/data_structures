/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 20:41:50 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 22:49:50 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RBT_H

# define RBT_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "queue.h"

/*
** @enum e_rbt_node_color
** @brief The color of a node in a red-black tree
*/

typedef enum	e_rbt_node_color
{
	RBT_RED, RBT_BLACK
}				t_rbt_node_color;

/*
** @struct s_rbt_node
** @brief A node in a red-black tree
** @var s_rbt_node::key
** @brief The key
** @var s_rbt_node::val
** @brief The value
** @var s_rbt_node::left
** @brief The left child
** @var s_rbt_node::right
** @brief The right child
** @var s_rbt_node::color
** @brief The color
** @var s_rbt_count::count
** @brief The number of this node's children
*/

typedef struct	s_rbt_node
{
	void				*key;
	void				*val;
	struct s_rbt_node	*left;
	struct s_rbt_node	*right;
	t_rbt_node_color	color;
	size_t				count;
}				t_rbt_node;

/*
** @struct s_rbt
** @brief A left-leaning red-black binary search tree
** @var s_rbt::root
** @brief The root of the tree
** @var s_rbt::size
** @brief The number of elements in this tree
** @var s_rbt::key_type
** @brief The type of keys in the tree
** @var s_rbt::val_type
** @brief The type of values in the ree
*/

typedef struct	s_rbt
{
	t_rbt_node		*root;
	const t_type	*key_type;
	const t_type	*val_type;	
}				t_rbt;

/*
** Initializes a new empty tree
** @param key_type	The type of keys
** @param val_type	The type of values
** @return The new tree, or `NULL` on failure. In case of an error, `errno` is
** set accordingly.
** @remark For this function to work, the datatype in this array must be
** comparable (i.e. implement the `cmp` function).
*/

t_rbt			*rbt_new(const t_type *key_type, const t_type *val_type);

/*
** Adds a new item to the tree or overwrites an existing one
** @param key	The key to be copied
** @param val	The value to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int				rbt_put(t_rbt *rbt, const void *key, const void *val);


/*
** Returns the value associated with a specified key.
** @param key	The key to search for
** @return The value associated with the key, or `NULL` if the key is not in
** the tree.
*/

void			*rbt_get(const t_rbt *rbt, const void *key);

/*
** Returns the number of elements in this tree.
** @return the number of elements in this tree.
*/

size_t			rbt_size(const t_rbt *rbt);

/*
** Deletes this tree and free all its items and the associated data. Does
** nothing if the argument is `NULL`.
*/

void			rbt_delete(t_rbt *rbt);

/*
** Returns the number of tiers in the tree.
** @return The number of tiers
** @note (used primarily for debugging purposes)
*/

size_t			rbt_height(const t_rbt *rbt);

/*
** Returns the smallest key in the tree.
** @return The value associated with the smallest key in the tree, or `NULL`,
** if the tree is empty.
*/

void			*rbt_min(const t_rbt *rbt);

/*
** Returns the largest key in the tree.
** @return The largest key in the tree, or `NULL`,
** if the tree is empty.
*/

void			*rbt_max(const t_rbt *rbt);

/*
** Returns the largest key less than or equal to the specified key.
** @param key The key
** @return The smallest key in the tree, or `NULL`,
** if the tree is empty.
*/

void			*rbt_floor(const t_rbt *rbt, const void *key);

/*
** Returns the smallest key greater than or equal to the specified key.
** @param key The key
** @return The key greater than or equal to the specified key, or `NULL`,
** if the tree is empty.
*/

void			*rbt_ceil(const t_rbt *rbt, const void *key);

/*
** Returns the number of keys in the tree strictly less than the specified key.
** @param key The key
** @return the number of keys in the tree strictly less than the specified key
*/

size_t			rbt_rank(const t_rbt *rbt, const void *key);

/*
** Returns a queue with all the keys in the tree, sorted in the ascending order.
** @return a queue with all the keys in the tree, sorted in the ascending order
*/

t_queue			*rbt_keys(const t_rbt *rbt);

/*
** Returns a queue with all the value in the tree, sorted by the
** associated keys in the ascending order.
** @return a queue with all the keys in the tree, sorted by the
** associated keys in the ascending order
*/

t_queue			*rbt_vals(const t_rbt *rbt);

/*
** Does the tree contain the specified key?
** @param key The key
** @return `1` if tree contains the specified key, `0` otherwise
*/

int				rbt_contains(const t_rbt *rbt, const void *key);

#endif
