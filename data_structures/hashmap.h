/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:15:39 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 00:00:39 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H

# define HASHMAP_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"
# include "queue.h"

# define HASHMAP_INIT_CAPACITY	51

typedef struct	s_hashmap
{
	void			**keys;
	void			**vals;
	size_t			size;
	size_t			capacity;
	const t_type	*key_type;	
	const t_type	*val_type;	
}				t_hashmap;

t_hashmap	*hashmap_new(const t_type *key_type, const t_type *val_type);
int			hashmap_put(t_hashmap *hm, const void *key, const void *val);
void		*hashmap_get(const t_hashmap *hm, const void *key);
t_queue		*hashmap_keys(const t_hashmap *hm);
t_queue		*hashmap_vals(const t_hashmap *hm);
size_t		hashmap_size(const t_hashmap *hm);
void		hashmap_delete(t_hashmap *hm);
int			hashmap_remove(t_hashmap *hm, const void *key);
int			hashmap_contains(const t_hashmap *hm, const void *key);

#endif
