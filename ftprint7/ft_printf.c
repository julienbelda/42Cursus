/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:27:34 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/21 11:58:00 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_format(const char format, va_list args)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += (char)ft_convert_c(va_arg(args, int));
	else if (format == 's')
		len += ft_convert_s(va_arg(args, char *));
	else if (format == 'd')
		len += ft_convert_d_and_i(va_arg(args, int));
	else if (format == 'i')
		len += ft_convert_d_and_i(va_arg(args, int));
	else if (format == '%')
		len += ft_print_prc('%');
	else if (format == 'u')
		len += ft_convert_u(va_arg(args, int));
	else if (format == 'x')
		len += ft_convert_base(va_arg(args, int), "0123456789abcdef");
	else if (format == 'X')
		len += ft_convert_base(va_arg(args, int), "0123456789ABCDEF");
	else if (format == 'p')
		len += ft_convert_p(va_arg(args, unsigned long), "0123456789abcdef");
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
	while (format[i])
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
	int	nb;

	nb = 27;
	
	ft_printf("Convert_s : %s\n", "hello");
	ft_printf("Convert_d : %d\n", nb);
	ft_printf("Convert_c : %c\n", 'j');
	ft_printf("Convert_prc :%%\n");
	ft_printf("Convert_p :%p\n", nb);
	ft_printf("Convert_x : %x", 42);
	ft_printf("Convert_X : %X\n", 42);
	ft_printf("Convert_u : %u\n", 42);
} */
