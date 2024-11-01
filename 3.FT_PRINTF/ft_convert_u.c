/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 08:45:14 by julien            #+#    #+#             */
/*   Updated: 2023/01/06 12:53:18 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_u(unsigned int nb)
{
	int	len;

	len = ft_unsigned_putnbr(nb);
	if (nb == 0)
		return (len + 1);
	return (len);
}
