/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr2data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 15:24:50 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 15:27:01 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		ptr2int(void *ptr)
{
	return (*(int *)ptr);
}

float	ptr2float(void *ptr)
{
	return (*(float *)ptr);
}

char	ptr2char(void *ptr)
{
	return (*(char *)ptr);
}
