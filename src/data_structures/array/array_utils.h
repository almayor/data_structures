/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 23:26:34 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 20:03:05 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

#ifndef ARRAY_UTILS_H

# define ARRAY_UTILS_H

void		array_grow(t_array *array);
void		array_shrink(t_array *array);

#endif
