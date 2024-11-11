/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:54:28 by julienbelda       #+#    #+#             */
/*   Updated: 2024/11/07 12:00:00 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "printf/ft_printf.h"

typedef struct s_element
{
	int					nb;
	struct s_element	*next;
}	t_element;

typedef struct s_stack
{
	t_element	*head;
}	t_stack;

/* LINKED_LIST */

void	ft_init_stack(t_stack *stack);

/* CHECK_ERRORS */

int	ft_check_number(char *str);
int	ft_check_double(int argc, char *argv[]);

/* SWAP */

void	ft_swap(t_stack *stack);
void	ft_sa(t_stack *stack_a);
void	ft_sb(t_stack *stack_b);
void	ft_ss(t_stack *stack_a, t_stack *stack_b);

/* PUSH */

/* ROTATE */

/* REVERSE_ROTATE */
#endif