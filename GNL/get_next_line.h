/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:41:54 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/02 16:35:04 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int			ft_strlen(const char *str);
char		*ft_strchr(char *str, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*get_next_line(int fd);
char		*ft_fill_stash(int fd, char *stash);
char		*ft_extract_line(char *stash);
char		*ft_new_stash(char *stash);

#endif
