/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:15:39 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 02:02:23 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHSET_H

# define HASHSET_H

# include "data_structures.h"
# include "queue.h"

# define HASHSET_INIT_CAPACITY	51

typedef struct	s_hashset
{
	void			**vals;
	size_t			size;
	size_t			capacity;
	const t_type	*type;	
}				t_hashset;

t_hashset	*hashset_new(const t_type *type);
int			hashset_put(t_hashset *hs, const void *val);
t_queue		*hashset_vals(const t_hashset *hs);
size_t		hashset_size(const t_hashset *hs);
void		hashset_delete(t_hashset *hs);
int			hashset_contains(const t_hashset *hs, const void *val);
int			hashset_remove(t_hashset *hs, const void *val);
t_hashset	*hashset_copy(const t_hashset *hs);

#endif
