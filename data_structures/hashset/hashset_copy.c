/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:37:51 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:51:10 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

t_hashset	*hashset_copy(const t_hashset *hs)
{
	t_hashset	*copy;
	t_queue		*vals;
	void		*val;

	if (!(copy = hashset_new(hs->type)) ||
		!(vals = hashset_vals(hs)))
		return (NULL);
	while ((val = queue_dequeue(vals)))
		hashset_put(copy, val);
	queue_delete(vals);
	return (copy);
}
