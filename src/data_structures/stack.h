/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:19:03 by unite             #+#    #+#             */
/*   Updated: 2020/09/07 22:19:38 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# define STACK_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "array.h"
# include "utils.h"

/*
** A last-in-first-out stack of generic items. Implemented using a resizable
** array. 
*/

typedef t_array	t_stack;

/*
** Copy the item and add it to the stack.
** @param data The item to be added
*/

void			stack_push(t_stack *stack, const void *data);

/*
** Removed and returns the item most recently added to this stack.
** @return the item most recently added, or `NULL` if the stack is empty.
*/

void			*stack_pop(t_stack *stack);

/*
** Returns the item most recently added to this stack, without removing it.
** @return the item most recently added, or `NULL` if the stack is empty.
*/

void			*stack_peek(const t_stack *stack);

/*
** Deletes the stack and frees memory taken by its contents.
*/

void			stack_delete(t_stack *stack);

/*
** Returns the number of items in this stack.
** @return the number of items in this stack
*/

size_t			stack_size(const t_stack *stack);

/*
** Initializes an empty stack.
** @param type the type of items that this stack will hold
** @return The new stack
*/

t_stack			*stack_new(const t_type *type);

/*
** Copies a stack and all it contents.
** @return A copy of the stack
*/

t_stack			*stack_copy(const t_stack *stack);

#endif
