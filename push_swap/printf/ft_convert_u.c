/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:08:16 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/30 14:31:37 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned_strlen(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb != 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

int	ft_unsigned_putnbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb > 9)
		ft_unsigned_putnbr(nb / 10);
	ft_putchar_fd((nb % 10 + '0'), 1);
	len += ft_unsigned_strlen(nb);
	return (len);
}

int	ft_convert_u(unsigned int nb)
{
	int	len;

	len = ft_unsigned_putnbr(nb);
	if (nb == 0)
		return (len + 1);
	return (len);
}
