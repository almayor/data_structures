/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unite <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 01:53:35 by unite             #+#    #+#             */
/*   Updated: 2020/09/05 20:20:36 by unite            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

# include <string.h>

void	ds_bzero(void *s, size_t n);
size_t	ds_strlen(const char *s);
int		ds_strcmp(const char *s1, const char *s2);
void	*ds_calloc(size_t count, size_t size);
char	*ds_strdup(const char *s1);

#endif
