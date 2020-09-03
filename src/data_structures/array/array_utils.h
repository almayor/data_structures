/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 23:26:34 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 23:28:09 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

#ifndef ARRAY_UTILS_H

# define ARRAY_UTILS_H

int		array_grow(t_array *array);
int		array_shrink(t_array *array);

#endif
