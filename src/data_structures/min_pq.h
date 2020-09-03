/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 18:46:03 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 23:59:02 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_PQ_H

# define MIN_PQ_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"
# include "ft_printf.h"
# include "array.h"

typedef t_array	t_min_pq;

t_min_pq	*min_pq_new(const t_type *type);
t_min_pq	*min_pq_new_size(const t_type *type, size_t size);
void		*min_pq_peek(const t_min_pq *pq);
void		*min_pq_pop(t_min_pq *pq);
int			min_pq_add(t_min_pq *pq, const void *data);
size_t		min_pq_size(const t_min_pq *pq);
void		min_pq_delete(t_min_pq *pq);
t_min_pq	*min_pq_copy(const t_min_pq *pq);

#endif
