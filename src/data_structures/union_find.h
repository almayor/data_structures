/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:49:30 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 18:55:45 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNION_FIND

# define UNION_FIND

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "utils.h"

/*
** @struct s_union_find
** @brief Weighted quick-union by rank with path compression by halving.
** @var s_union_find::parent
** @brief An array with each element's parent
** @var s_union_find::nchild
** @brief An array with the number of each element's children
** @var s_union_find::size
** @brief The number of elements
** @var s_union_find::count
** @brief The number of disconnected sets
*/

typedef struct	s_union_find
{
	size_t			*parent;
	size_t			*nchild;
	size_t			size;
	size_t			count;
}				t_union_find;

/*
** Initializes a new union-find data structure of the specified size
** @return The new union-find data structure, or `NULL` if an error occured.
** In case of an error, `errno` is set accordingly.
*/

t_union_find	*union_find_new(size_t size);

/*
** Merges the set containing element {@code p} with
** the set containing element {@code q}.
** @param p on element
** @param q the other element
** @return `0` on success, `1` on failure (e.g. if either element is not
** contained in this union-find). In case of an error,
** `errno` is set accordingly.
*/

int				union_find_union(t_union_find *uf, size_t p, size_t q);

/*
** Returns the number of disconnected sets.
** @return The number of disconnected sets
*/

size_t			union_find_count(const t_union_find *uf);

/*
** Returns the number of elements in this union-find.
** @return The number of elements in this union-find.
*/

size_t			union_find_size(const t_union_find *uf);

/*
** Deletes the union-find and frees all memory taken by its contents, or does
** nothing if the argument is `NULL`.
*/

void			union_find_delete(t_union_find *uf);

/*
** Returns the canonical element of the set containing the specified element.
** @param p	An element
** @return The canonical element of the set containing the specified element,
** or `-1` if the element is outside of the range of this data structure.
*/

ssize_t			union_find_find(const t_union_find *uf, size_t p);

#endif
