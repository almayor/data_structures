/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 01:53:35 by unite             #+#    #+#             */
/*   Updated: 2020/07/19 15:26:49 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

int		*int2ptr(int a);
char	*char2ptr(char a);
float	*float2ptr(float a);

int		ptr2int(void *ptr);
char	ptr2char(void *ptr);
float	ptr2float(void *ptr);

#endif
