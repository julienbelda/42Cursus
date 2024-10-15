/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:58:28 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 21:59:33 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Met à 0 octect les n premier octects du bloc pointé par s
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/* int	main(void)
{
	char	str[] = "hello";
	ft_bzero(str, 3);
	printf("%s\n", str);
} */