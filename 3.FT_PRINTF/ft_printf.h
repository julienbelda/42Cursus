/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:51:42 by julien            #+#    #+#             */
/*   Updated: 2023/01/06 12:53:19 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_convert_c(int c);
int		ft_convert_d(int c);
int		ft_convert_u(unsigned int nb);
int		ft_convert_base(unsigned int nb, char *str);
int		ft_convert_long(unsigned long nb, char *str);
int		ft_convert_s(char *s);
int		ft_print_prc(int prc);
void	ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_unsigned_putnbr(unsigned int nb);
int		ft_putstr(char *s);
int		ft_strlen(int nb);
int		ft_strlen(int len);
int		ft_convert_format(va_list ap, char format);

#endif