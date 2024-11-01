/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:58:45 by julien            #+#    #+#             */
/*   Updated: 2023/02/16 20:25:21 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_s(char *s)
{
	int	i;

	i = 0;
	if (!s)
		i = ft_putstr("(null)");
	else
		i = ft_putstr(s);
	return (i);
}
