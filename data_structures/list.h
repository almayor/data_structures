/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:12:34 by unite             #+#    #+#             */
/*   Updated: 2020/09/01 17:25:49 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H

# define LIST_H

# include "data_structures.h"

typedef struct		s_link
{
	void			*content;
	struct s_link	*next;
	struct s_link	*prev;
}					t_link;

typedef struct		s_list
{
	t_link			*head;
	t_link			*tail;
	size_t			size;
	const t_type	*type;
}					t_list;

int					list_add_first(t_list *alst, const void *data);
int					list_add_last(t_list *alst, const void *data);
void				list_delete(t_list *alst);
void				*list_unlink_first(t_list *alst);
void				*list_unlink_last(t_list *alst);
void				*list_unlink(t_list *alst, size_t index);
void				list_remove_first(t_list *alst);
void				list_remove_last(t_list *alst);
void				list_remove(t_list *alst, size_t index);
void				*list_peek_first(const t_list *alst);
void				*list_peek_last(const t_list *alst);
void				*list_peek(const t_list *alst, size_t index);
size_t				list_size(const t_list *alst);
t_list				*list_new(const t_type *type);
int					list_merge_sort(t_list *alst);
void				list_print(const t_list *alst);
t_list				*list_copy(const t_list *alst);

#endif
