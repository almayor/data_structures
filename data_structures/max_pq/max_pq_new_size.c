/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pq_new_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:49:16 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 19:15:55 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "max_pq.h"

t_max_pq	*max_pq_new_size(const t_type *type, size_t size)
{
	if (!type->cmp)
	{
		errno = EINVAL;
		return (NULL);
	}
	return (array_new_size(type, size));
}
