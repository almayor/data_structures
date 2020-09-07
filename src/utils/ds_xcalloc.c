/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 00:27:33 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:41:56 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

/*
** Replicates behaviour of `calloc` from `libc`, but fails on
** memory allocation errors.
*/

void	*ds_xcalloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!mem && !size)
		ds_exit();
	ds_bzero(mem, count * size);
	return (mem);
}
