/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 17:19:03 by unite             #+#    #+#             */
/*   Updated: 2020/09/04 15:08:58 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H

# define STACK_H

# include <errno.h>
# include <sys/types.h>
# include "types.h"
# include "libft.h"
# include "array.h"

/*
** A last-in-first-out stack of generic items. Implemented using a resizable
** array. 
*/

typedef t_array	t_stack;

/*
** Copy the item and add it to the stack.
** @param Item to be added
** @return 0 on success, 1 on failure. In case of an error, `errno` is set
** accordingly.
*/

int				stack_push(t_stack *stack, const void *data);

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
** @return The new stack, or `NULL` if an error occured. In case of an error,
** `errno` is set accordingly.
*/

t_stack			*stack_new(const t_type *type);

/*
** Prints a string representation of this stack to standard output.
** @remark For this function to work, the datatype in the queue must be
** printable (i.e. implement the `print` function). Otherwise, an exception
** will occur.
*/

void			stack_print(const t_stack *stack);

/*
** Copies a stack and all it contents.
** @return The copy of the stack or `NULL` if an error occured. In case of an
** error, `errno` will set accordingly.
*/

t_stack			*stack_copy(const t_stack *stack);

#endif
