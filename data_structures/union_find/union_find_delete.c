/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_find_delete.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 22:07:53 by unite             #+#    #+#             */
/*   Updated: 2020/07/21 22:09:06 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "union_find.h"

void	union_find_delete(t_union_find *uf)
{
	if (!uf)
		return ;
	free(uf->parent);
	free(uf->nchild);
	free(uf);
}
