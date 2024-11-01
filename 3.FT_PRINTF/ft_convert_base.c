/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 10:33:52 by jbelda            #+#    #+#             */
/*   Updated: 2023/01/06 12:53:16 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen_unsigned_int(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i = 1;
	while (nb != 0)
	{
		i++;
		nb = nb / 16;
	}
	return (i);
}

void	ft_putchar_hexa(unsigned int c, char *str)
{
	write(1, &str[c], 1);
}

int	ft_convert_base(unsigned int nb, char *str)
{
	int	len;

	len = 0;
	if (nb > 15)
		ft_convert_base((nb / 16), str);
	ft_putchar_hexa((nb % 16), str);
	len += ft_strlen_unsigned_int(nb);
	return (len);
}
