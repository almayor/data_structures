/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 22:50:26 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:49:50 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*
** Replicates behaviour of `strdup` from `libc`.
*/

char	*ds_strdup(const char *s1)
{
	size_t	i;
	char	*cpy;

	cpy = ds_xcalloc(sizeof(char), ds_strlen(s1) + 1);
	i = 0;
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = 0;
	return (cpy);
}
