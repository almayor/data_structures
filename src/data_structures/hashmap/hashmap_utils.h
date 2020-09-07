/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:16:21 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:35:42 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_UTILS

# define HASHMAP_UTILS

# include "hashmap.h"

void	hashmap_grow(t_hashmap *hm);
void	hashmap_shrink(t_hashmap *hm);

#endif
