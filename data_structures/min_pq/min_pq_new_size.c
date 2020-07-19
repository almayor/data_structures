/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pq_new_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:49:16 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 19:16:10 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "min_pq.h"

t_min_pq	*min_pq_new_size(const t_type *type, size_t size)
{
	if (!type->cmp)
	{
		errno = EINVAL;
		return (NULL);
	}
	return (array_new_size(type, size));
}
