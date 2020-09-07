/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds_exit_set.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 19:48:38 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:26:03 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*
** Set `errno` to the specified value, print the error message, and
** exit the process
** @param err The value to which set `errno`
*/

void	ds_exit_set(int err)
{
	errno = err;
	perror("data_structures");
	exit(errno);
}
