/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:15:39 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 18:56:00 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHSET_H

# define HASHSET_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "queue.h"
# include "utils.h"

/*
** The default initial capacity of a newly initialized hashset
*/

# define HASHSET_INIT_CAPACITY	51

/*
** @struct s_hashset
** @brief A dynamically resizing linear-probing hashset.
** @var s_hashset::vals
** @brief The data
** @var s_hashset::size
** @brief The number of elements in the hashset
** @var s_hashset::capacity
** @brief The current capacity of the hashset
** @var s_hashset::type
** @brief The type of elements in the hashset
*/

typedef struct	s_hashset
{
	void			**vals;
	size_t			size;
	size_t			capacity;
	const t_type	*type;	
}				t_hashset;

/*
** Initializes a new empty set.
** @param type	The type of items that this set can hold
** @return The new hashset, or `NULL` on failure. In case of an error,
** `errno` is set accordingly.
** @remark For this function to work, the type must be
** hashable (i.e. implement the `hash` function).
*/

t_hashset	*hashset_new(const t_type *type);

/*
** Adds a copy of the specified element to the hashset.
** @param val	The value
** @return `0` on success, `1` on failure. In case of an error, `errno` is set
** accordingly.
*/

int			hashset_put(t_hashset *hs, const void *val);

/*
** Returns a queue with all the elements in the set.
** @return A queue with all the elements in the set.
*/

t_queue		*hashset_vals(const t_hashset *hs);

/*
** Returns the number of elements in this set.
** @return The number of elements in this set.
*/

size_t		hashset_size(const t_hashset *hs);

/*
** Deletes this hashset and frees all its items and the associated data. Does
** nothing if the argument is `NULL`.
*/

void		hashset_delete(t_hashset *hs);

/*
** Is the specified element contained in the set?
** @param val	The value
** @return `1` if the element is in the set, `0` otherwise
*/

int			hashset_contains(const t_hashset *hs, const void *val);

/*
** Removed the specified element from the set.
** @param val	The value
** @return `1` on success, `0` if the element is not in the set.
*/

int			hashset_remove(t_hashset *hs, const void *val);

/*
** Copies the hashset and all it contents.
** @return The copy of the set or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_hashset	*hashset_copy(const t_hashset *hs);

#endif
