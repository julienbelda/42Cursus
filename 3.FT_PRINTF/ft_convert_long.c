/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 08:50:43 by julien            #+#    #+#             */
/*   Updated: 2023/01/06 12:53:23 by julien           ###   ########.fr       */
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

int	ft_convert_long(unsigned long nbr, char *str)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	len += ft_convert_hexa(nbr, str);
	return (len);
}
