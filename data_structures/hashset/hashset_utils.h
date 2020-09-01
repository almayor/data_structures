/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:16:21 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 01:50:34 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHSET_UTILS

# define HASHSET_UTILS

# include "hashset.h"

size_t	hashset_index(const t_hashset *hs, const void *val);
int		hashset_grow(t_hashset *hs);
int		hashset_shrink(t_hashset *hs);

#endif
