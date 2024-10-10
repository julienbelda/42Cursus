/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:13:54 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/08 14:27:07 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_convert_s(char *s)
{
	int	i;

	i = 0;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return (6);
	} 
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
	
}