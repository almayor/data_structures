/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds_xmalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 21:38:47 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 21:42:11 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

/*
** Replicates behaviour of `malloc` from `libc`, but fails on
** memory allocation errors.
*/

void	*ds_xmalloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem && !size)
		ds_exit();
	return (mem);
}