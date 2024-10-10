/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:27:37 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/09 00:12:08 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *, ...);
int		ft_convert_d_and_i(int d);
int		ft_convert_c(int c);
int		ft_convert_s(char *s);
int		ft_convert_format(const char format, va_list args);

char	*ft_itoa(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);

#endif