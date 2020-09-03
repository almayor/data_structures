/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_delete.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:04:25 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 22:30:05 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

void	hashmap_delete(t_hashmap *hm)
{
	size_t	i;

	if (!hm)
		return ;
	if (hm->keys)
	{
		i = 0;
		while (i < hm->capacity)
			hm->key_type->del(hm->keys[i++]);
		free(hm->keys);
	}
	if (hm->vals)
	{
		i = 0;
		while (i < hm->capacity)
			hm->val_type->del(hm->vals[i++]);
		free(hm->vals);
	}
	free(hm);
}
