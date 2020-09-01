/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 08:35:17 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 08:36:21 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTS_H

# define SORTS_H

# include "array.h"
# include "list.h"

int	array_insertion_sort(t_array *array);
int	array_merge_sort(t_array *array);
int	array_quick_sort(t_array *array);
int	list_merge_sort(t_list *alst);

#endif
