/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:49:30 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 00:00:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNION_FIND

# define UNION_FIND

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"

typedef struct	s_union_find
{
	size_t			*parent;
	size_t			*nchild;
	size_t			size;
	size_t			count;
}				t_union_find;

t_union_find	*union_find_new(size_t size);
int				union_find_union(t_union_find *uf, size_t p, size_t q);
size_t			union_find_count(const t_union_find *uf);
size_t			union_find_size(const t_union_find *uf);
void			union_find_delete(t_union_find *uf);
ssize_t			union_find_find(const t_union_find *uf, size_t p);

#endif
