/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_contains.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:53:13 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:51:16 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hashset.h"
#include "hashset_utils.h"

int		hashset_contains(const t_hashset *hs, const void *val)
{
	return (hs->vals[hashset_index(hs, val)] != NULL);
}
