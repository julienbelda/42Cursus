/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:32:16 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/21 11:37:21 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

static void	ft_putchar_hexa(unsigned long c, char *str)
{
	write(1, &str[c], 1);
}

int	ft_convert_hexa(unsigned long nb, char *str)
{
	int	len;

	len = 0;
	if (nb > 15)
		ft_convert_hexa((nb / 16), str);
	ft_putchar_hexa((nb % 16), str);
	len += ft_strlen_unsigned_int(nb);
	return (len);
}

int	ft_convert_p(unsigned long nbr, char *str)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	len += ft_convert_hexa(nbr, str);
	return (len);
}
