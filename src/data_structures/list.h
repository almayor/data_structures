/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:12:34 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 18:55:58 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H

# define LIST_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "utils.h"

/*
** @struct s_link
** @brief A link in a doubly-linked list.
** @var s_link::content
** @brief The content
** @var s_link::next
** @brief The next link
** @var s_link::prev
** @brief The previous link
*/

typedef struct		s_link
{
	void			*content;
	struct s_link	*next;
	struct s_link	*prev;
}					t_link;

/*
** @struct s_list
** @brief Doubly-linked list of generic items
** @var s_list::head
** @brief The first link
** @var s_list::tail
** @brief The last link
** @var s_list::size
** @brief The number of items in the list
** @var s_list::type
** @brief The type of items in this list
*/

typedef struct		s_list
{
	t_link			*head;
	t_link			*tail;
	size_t			size;
	const t_type	*type;
}					t_list;

/*
** Adds a copy of the specified element at the front of this list.
** @param data	The item to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int					list_add_first(t_list *alst, const void *data);

/*
** Adds a copy of the specified element at the back of this list.
** @param data	The item to be copied
** @return `0` on success, `1` on failure. In case of an error, `errno` is
** set accordingly.
*/

int					list_add_last(t_list *alst, const void *data);

/*
** Deletes the list and frees all memory taken by its contents.
*/

void				list_delete(t_list *alst);

/*
** Removes the first item in the list and returns it.
** @return The first item in the list, or `NULL` if the list is empty.
*/

void				*list_unlink_first(t_list *alst);

/*
** Removes the last item in the list and returns it.
** @return The last item in the list, or `NULL` if the list is empty.
*/

void				*list_unlink_last(t_list *alst);

/*
** Removes the item at the specified position in the list and returns it.
** @return The item in the list, or `NULL` if the list is empty.
** @note This method has complexity `O(N/2)` in the number of items
** in the worst case.
*/

void				*list_unlink(t_list *alst, size_t index);

/*
** Removes the first item in the list.
*/

void				list_remove_first(t_list *alst);

/*
** Removes the last item in the list.
*/

void				list_remove_last(t_list *alst);

/*
** Removes the item at the specified position in the list.
** @note This method has complexity `O(N/2)` in the number of items
** in the worst case.
*/

void				list_remove(t_list *alst, size_t index);

/*
** Returns the first item in the list. The item is kept in the list.
** @return The item, or `NULL` if the list is empty.
*/

void				*list_peek_first(const t_list *alst);

/*
** Returns the last item in the list. The item is kept in the list.
** @return The item, or `NULL` if the list is empty.
*/

void				*list_peek_last(const t_list *alst);

/*
** Returns the item at the specified position in the list.
** The item is kept in the list.
** @return The item, or `NULL` if the list is empty.
** @note This method has complexity `O(N/2)` in the number of items
** in the worst case.
*/

void				*list_peek(const t_list *alst, size_t index);

/*
** Returns the number of items in this list.
** @return The number of items in this list
*/

size_t				list_size(const t_list *alst);

/*
** Allocates memory and initializes an empty list.
** @param the type of items that this list will hold
** @return `0` on success, `1` on failure. In case of failure,
** `errno` is set accordingly.
*/

t_list				*list_new(const t_type *type);

/*
** Sorts this list in ascending order using in-place merge sort.
** @return `0` on success, `1` on failure. In case of failure,
** `errno` is set accordingly.
** @remark For this function to work, the datatype in this list must be
** comparable (i.e. implement the `cmp` function).
*/

int					list_merge_sort(t_list *alst);

/*
** Copies an list and all it contents.
** @return The copy of the list or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_list				*list_copy(const t_list *alst);

#endif
