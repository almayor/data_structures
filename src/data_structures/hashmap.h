/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:15:39 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 22:47:46 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H

# define HASHMAP_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "queue.h"

/*
** The default initial capacity of a newly initialized hashmap
*/

# define HASHMAP_INIT_CAPACITY	51

/*
** @struct s_hashmap
** @brief A symbol table of generic key-value pairs,
** implemented as a dynamically resizing linear-probing hashmap.
** @var s_hashmap::keys
** @brief The keys
** @var s_hashmap::vals
** @brief The values
** @var s_hashmap::size
** @brief The number of elements in the hashmap
** @var s_hashmap::capacity
** @brief The current capacity of the hashmap
** @var s_hashmap::key_type
** @brief The type of keys in the hashmap
** @var s_hashmap::val_type
** @brief The type of values in the hashmap
*/

typedef struct	s_hashmap
{
	void			**keys;
	void			**vals;
	size_t			size;
	size_t			capacity;
	const t_type	*key_type;	
	const t_type	*val_type;	
}				t_hashmap;

/*
** Initializes a new empty map.
** @param key_type	The type of keys that this map can hold
** @param val_type	The type of values that this map can hold
** @return The new hashmap, or `NULL` on failure. In case of an error,
** `errno` is set accordingly.
** @remark For this function to work, the key_type must be
** hashable (i.e. implement the `hash` function).
*/

t_hashmap	*hashmap_new(const t_type *key_type, const t_type *val_type);

/*
** Adds a key-value pair to the symbol table.
** @param key	The key
** @param val	The value
** @return `1` no success, `0` on failure. In case of an error, `errno` is
** set accordingly.
*/

int			hashmap_put(t_hashmap *hm, const void *key, const void *val);

/*
** Fetches the value associated with the given key
** @param key	The key
** @return The value, or `NULL` if the key is not in the map.
*/

void		*hashmap_get(const t_hashmap *hm, const void *key);

/*
** Returns a queue with all the keys in the map.
** @return A queue with all the keys in the map.
*/

t_queue		*hashmap_keys(const t_hashmap *hm);

/*
** Returns a queue with all the values in the map.
** @return A queue with all the values in the map.
*/

t_queue		*hashmap_vals(const t_hashmap *hm);

/*
** Returns the number of elements in this map.
** @return The number of elements in this map.
*/

size_t		hashmap_size(const t_hashmap *hm);

/*
** Deletes this hashmap and free all its items and the associated data. Does
** nothing if the argument is `NULL`.
*/

void		hashmap_delete(t_hashmap *hm);

/*
** Removed the element associated with the specified key from the map.
** @param key	The key
** @return `1` on success, `0` if the key is not in the map.
*/

int			hashmap_remove(t_hashmap *hm, const void *key);

/*
** Is the specified key contained in the map?
** @param key	The key
** @return `1` if the key is in the map, `0` otherwise
*/

int			hashmap_contains(const t_hashmap *hm, const void *key);

#endif
