/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:46:03 by unite             #+#    #+#             */
/*   Updated: 2020/07/17 19:16:54 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_PQ_H

# define MAX_PQ_H

# include "data_structures.h"
# include "array.h"

typedef t_array	t_max_pq;

t_max_pq	*max_pq_new(const t_type *type);
t_max_pq	*max_pq_new_size(const t_type *type, size_t size);
void		*max_pq_peek(const t_max_pq *pq);
void		*max_pq_remove(t_max_pq *pq);
int			max_pq_add(t_max_pq *pq, const void *data);
size_t		max_pq_size(const t_max_pq *pq);
void		max_pq_delete(t_max_pq *pq);

#endif
