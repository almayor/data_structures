/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 22:13:11 by unite             #+#    #+#             */
/*   Updated: 2020/07/18 16:25:16 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H

# define TYPES_H

# include <stdlib.h>
# include "libft.h"
# include "ft_printf.h"

typedef struct	s_type
{
	char	*name;
	void	*(*copy)(const void *);
	void	(*del)(void *);
	int		(*cmp)(const void *, const void *);
	void	(*print)(const void *);
	size_t	(*hash)(const void *);
}				t_type;

extern const t_type *g_type_char;
extern const t_type *g_type_float;
extern const t_type *g_type_int;
extern const t_type *g_type_str;

#endif
