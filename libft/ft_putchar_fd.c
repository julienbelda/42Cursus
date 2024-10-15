/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:32:15 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 19:52:31 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Ecrire un caractère sur un file descriptor */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int		main(void)
{
	ft_putchar_fd('j', 1);
} */