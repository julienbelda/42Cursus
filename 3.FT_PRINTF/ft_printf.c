/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:27:34 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/09 16:18:01 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* Etape 1 : formater la chaine de caractère trouver le % et le caractère suivant pour lui associé la bonne fonction */

int	ft_convert_format(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += (char)ft_convert_c(va_arg(args, int));
	if (format == 's')
		len += ft_convert_s(va_arg(args, char *));
	if (format == 'd')
		len += ft_convert_d_and_i(va_arg(args, int));
	if (format == 'i')
		len += ft_convert_d_and_i(va_arg(args, int));
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	va_start(args, format);
	i = 0;
	len = 0;

	if (len < 0)
		return (-1);
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_convert_format(format[i], args);
		}
		else
			len += ft_convert_c(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/* int main()
{
	ft_printf("hello %d", 10);
} */
