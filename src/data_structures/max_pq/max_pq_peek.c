/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_pq_peek.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:50:22 by unite             #+#    #+#             */
/*   Updated: 2020/07/17 19:17:18 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "max_pq.h"

void	*max_pq_peek(const t_max_pq *pq)
{
	if (array_size(pq) == 0)
		return (NULL);
	return (array_get(pq, 0));
}
