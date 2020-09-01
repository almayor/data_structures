/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_contains.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:53:13 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:48:25 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashmap.h"

int		hashmap_contains(const t_hashmap *hm, const void *key)
{
	return (hashmap_get(hm, key) != NULL);
}
