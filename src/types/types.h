/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:13:11 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 23:39:12 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H

# define TYPES_H

# include <stdlib.h>
# include "utils.h"

/*
** @struct s_type
** @brief A full representation of a data type, used to achieve polymorphism
** in the implementation of data structures
** @remark Because polymorphism is achieved with `void` pointers,
** primitive data types, such as `int` and `char`, must be converted to
** pointers.
** @see `data2ptr.c`
** @see `ptr2data.c`
** @details It contains pointers to all the functions needed to work
** with this data type. New `type`'s can be defined to extend the types
** that the data structures in this library can work with.
** @var s_type::name
** @brief The name of a datatype as a string
** @var s_type::copy
** @brief A function pointer used to copy the data type
** @var s_type::del
** @brief A function pointer used to free the memory taken by the data type
** @var s_type::cmp
** @brief (optional) A function ponter used to compare members of this
** data type
** @var s_type::hash
** @brief (optional) A function pointer used to get a hash value of this
** data type
*/

typedef struct	s_type
{
	char		*name;
	void		*(*copy)(const void *);
	void		(*del)(void *);
	int			(*cmp)(const void *, const void *);
	size_t		(*hash)(const void *, size_t);
}				t_type;

/*
** A representation of the `char` data type
*/

extern const t_type *g_type_char;

/*
** A representation of the `float` data type
*/

extern const t_type *g_type_float;

/*
** A representation of the `int` data type
*/

extern const t_type *g_type_int;

/*
** A representation of the `char*` data type
*/

extern const t_type *g_type_str;

/*
** A representation of the `t_array` data type
*/

extern const t_type *g_type_array;

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
