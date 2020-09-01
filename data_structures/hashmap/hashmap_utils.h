/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:16:21 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:46:51 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_UTILS

# define HASHMAP_UTILS

# include "hashmap.h"

size_t	hashmap_index(const t_hashmap *hm, const void *key);
int		hashmap_grow(t_hashmap *hm);
int		hashmap_shrink(t_hashmap *hm);

#endif
