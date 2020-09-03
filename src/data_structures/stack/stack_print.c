/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 16:48:53 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 03:36:12 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_print(const t_stack *stack)
{
	size_t	i;

	i = stack->size;
	while (i > 0)
	{
		stack->type->print(stack->arr[i - 1]);
		if (i > 1)
			ft_putstr(" -> ");
		i--;
	}
	ft_putchar('\n');
}
