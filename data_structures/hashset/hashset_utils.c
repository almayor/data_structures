/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:19:37 by unite             #+#    #+#             */
/*   Updated: 2020/09/03 22:47:48 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset_utils.h"

void	hashset_rehash(t_hashset *hs, void **old_vals, size_t old_capacity)
{
	size_t	i;
	size_t	ind;

	i = 0;
	while (i < old_capacity)
	{
		if (old_vals[i] != NULL)
		{
			hashset_put(hs, old_vals[i]);
			hs->type->del(old_vals[i]);
		}
		i++;
	}
	free(old_vals);
}

int		hashset_grow(t_hashset *hs)
{
	void	**old_vals;
	size_t	old_capacity;

	old_vals = hs->vals;
	old_capacity = hs->capacity;
	if (!(hs->vals = ft_calloc(sizeof(void *), hs->capacity * 2)))
	{
		hs->vals = old_vals;
		return (1);
	}
	hs->capacity = hs->capacity * 2;
	hashset_rehash(hs, old_vals, old_capacity);
	free(old_vals);
	return (0);
}

int		hashset_shrink(t_hashset *hs)
{
	void	**old_vals;
	size_t	old_capacity;

	old_vals = hs->vals;
	old_capacity = hs->capacity;
	if (!(hs->vals = ft_calloc(sizeof(void *), hs->size * 2)))
	{
		hs->vals = old_vals;
		return (1);
	}
	hs->capacity = hs->size * 2;
	hashset_rehash(hs, old_vals, old_capacity);
	free(old_vals);
	return (0);
}
