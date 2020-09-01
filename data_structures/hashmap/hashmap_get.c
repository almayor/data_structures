/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 18:59:42 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:48:12 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"
#include "hashmap_utils.h"

void	*hashmap_get(const t_hashmap *hm, const void *key)
{
	return (hm->vals[hashmap_index(hm, key)]);
}
