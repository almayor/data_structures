/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_pq_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 01:53:42 by unite             #+#    #+#             */
/*   Updated: 2020/07/17 14:05:02 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "min_pq.h"

void	min_pq_delete(t_min_pq *pq)
{
	array_delete(pq);
}
