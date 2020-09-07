/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ds_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/07 19:48:38 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:26:32 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

/*
** Print the error message, corresponding to `errno`, exit the process
*/

void	ds_exit(void)
{
	perror("data_structures");
	exit(errno);
}
