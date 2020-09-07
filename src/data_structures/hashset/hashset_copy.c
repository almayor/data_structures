/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 01:37:51 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:59:00 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

t_hashset	*hashset_copy(const t_hashset *hs)
{
	t_hashset	*copy;
	t_queue		*vals;
	void		*val;

	copy = hashset_new(hs->type);
	vals = hashset_vals(hs);
	while ((val = queue_dequeue(vals)))
		hashset_put(copy, val);
	queue_delete(vals);
	return (copy);
}
