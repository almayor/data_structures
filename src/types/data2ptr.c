/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 01:52:26 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 01:53:33 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		*int2ptr(int a)
{
	static int i;

	i = a;
	return (&i);
}

char	*char2ptr(char a)
{
	static char i;

	i = a;
	return (&i);
}

float	*float2ptr(float a)
{
	static float i;

	i = a;
	return (&i);
}
