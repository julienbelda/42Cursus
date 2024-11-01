/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:43:37 by julien            #+#    #+#             */
/*   Updated: 2023/01/06 12:53:15 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_format(va_list ap, char format)
{
	int	convert;

	convert = 0;
	if (format == 'c')
		convert = ft_convert_c(va_arg(ap, int));
	else if (format == 'd' || format == 'i')
		convert = ft_convert_d(va_arg(ap, int));
	else if (format == 's')
		convert = ft_convert_s(va_arg(ap, char *));
	else if (format == '%')
		convert = ft_print_prc('%');
	else if (format == 'u')
		convert = ft_convert_u(va_arg(ap, unsigned int));
	else if (format == 'x')
		convert = ft_convert_base(va_arg(ap, int), "0123456789abcdef");
	else if (format == 'X')
		convert = ft_convert_base(va_arg(ap, int), "0123456789ABCDEF");
	else if (format == 'p')
		convert = ft_convert_long((va_arg(ap, unsigned long)),
				"0123456789abcdef");
	return (convert);
}

int	ft_printf(const char *s, ...)
{
	int			i;
	va_list		ap;
	int			len;

	i = -1;
	va_start(ap, s);
	len = 0;
	while (s[++i])
	{
		if (s[i] == '%')
			len += ft_convert_format(ap, s[++i]);
		else
			len += write(1, &s[i], 1);
	}
	va_end(ap);
	return (len);
}
