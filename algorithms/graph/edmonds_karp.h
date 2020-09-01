/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   edmonds_karp.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 09:37:25 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 16:56:11 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EDMONDS_KARP_H

# define EDMONDS_KARP_H

# include "array.h"
# include "graph.h"

t_array	*edmonds_karp(const t_graph *graph, const void *source, const void *sink);

#endif
