/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:54:38 by julienbelda       #+#    #+#             */
/*   Updated: 2024/11/07 11:51:07 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	t_element	*first_element;
	t_element	*second_element;

	if (!stack || !stack->head || !stack->head->next)
		return ;
	first_element = stack->head;
	second_element = first_element->next;

	first_element->next = second_element->next;
	second_element->next = first_element;
	stack->head = second_element;
}

void	ft_sa(t_stack *stack_a)
{
	ft_swap(stack_a);
}

void	ft_sb(t_stack *stack_b)
{
	ft_swap(stack_b);
}

void	ft_ss(t_stack *stack_a, t_stack *stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
}