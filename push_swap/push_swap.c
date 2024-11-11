/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:52:23 by julienbelda       #+#    #+#             */
/*   Updated: 2024/11/07 11:26:05 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	
	if (argc == 1 || argv[1] == NULL)
		return (1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (ft_check_double(argc, argv) == 0 || ft_check_number(argv[i]) == 0)
			ft_printf("Error");
