/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:25:52 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/21 11:26:30 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen_unsigned_int(unsigned int nb)
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
