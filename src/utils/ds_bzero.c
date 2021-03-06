/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:17:11 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 20:21:21 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*
** Replicates behaviour of `bzero` from `libc`.
*/

void	ds_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
		s1[i++] = 0;
}
