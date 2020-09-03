/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:04:25 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 22:29:58 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"

void	hashset_delete(t_hashset *hs)
{
	size_t	i;

	if (!hs)
		return ;
	if (hs->vals)
	{
		i = 0;
		while (i < hs->capacity)
			hs->type->del(hs->vals[i++]);
		free(hs->vals);
	}
	free(hs);
}
