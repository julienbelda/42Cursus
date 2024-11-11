/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d_and_i.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:24:08 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/30 14:29:37 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_d_and_i(int nb)
{
	int		len;
	char	*s;

	s = ft_itoa(nb);
	ft_putstr_fd(s, 1);
	len = ft_strlen(s);
	free (s);
	return (len);
}
