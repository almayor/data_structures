/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:19:03 by unite             #+#    #+#             */
/*   Updated: 2020/07/22 10:14:28 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# define STACK_H

# include "data_structures.h"
# include "array.h"

typedef t_array	t_stack;

int				stack_push(t_stack *stack, const void *data);
void			*stack_pop(t_stack *stack);
void			*stack_peek(const t_stack *stack);
void			stack_delete(t_stack *stack);
size_t			stack_size(const t_stack *stack);
t_stack			*stack_new(const t_type *type);
void			stack_print(const t_stack *stack);
t_stack			*stack_copy(const t_stack *stack);

#endif
