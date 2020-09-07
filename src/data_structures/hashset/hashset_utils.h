/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashset_utils.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 19:16:21 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:36:53 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHSET_UTILS

# define HASHSET_UTILS

# include "hashset.h"

void	hashset_grow(t_hashset *hs);
void	hashset_shrink(t_hashset *hs);

#endif
