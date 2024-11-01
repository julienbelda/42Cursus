/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:27:37 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/30 14:29:43 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_convert_d_and_i(int nb);
int		ft_convert_c(int c);
int		ft_convert_s(char *s);
int		ft_convert_format(const char format, va_list args);
int		ft_print_prc(int prc);
int		ft_convert_u(unsigned int nb);
int		ft_convert_p(unsigned long nbr, char *str);
int		ft_convert_base(unsigned int nb, char *str);

#endif