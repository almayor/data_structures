/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr2data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:24:50 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 23:39:01 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ptr2int(const void *ptr)
{
	return (*(int *)ptr);
}

float	ptr2float(const void *ptr)
{
	return (*(float *)ptr);
}

char	ptr2char(const void *ptr)
{
	return (*(char *)ptr);
}
