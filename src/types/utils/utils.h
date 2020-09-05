/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 01:53:35 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 16:20:30 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

/*
** Converts `int` to `int*`
*/

int		*int2ptr(int a);

/*
** Converts `char` to `char*`
*/

char	*char2ptr(char a);

/*
** Converts `float` to `float*`
*/

float	*float2ptr(float a);

/*
** Converts `int*` to `int`
*/

int		ptr2int(const void *ptr);

/*
** Converts `char*` to `char`
*/

char	ptr2char(const void *ptr);

/*
** Converts `float*` to `float`
*/

float	ptr2float(const void *ptr);

#endif
