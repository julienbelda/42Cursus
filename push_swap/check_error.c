/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:00:33 by julienbelda       #+#    #+#             */
/*   Updated: 2024/11/07 11:25:53 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_double(int argc, char *argv[])
{
	int	i;
	int	j;
	int	count;

	j = 1;
	count = 0;
	if (argc == 2)
		j = 0;
	i = j;
	while (argv[j])
		j++;
	j--;
	while (i < j)	
	{	
		while ((i + count) < j)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j - count]))
				return (0);
			count++;
		}
		i++;
	}
	return (1);
}