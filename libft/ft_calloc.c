/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:44:50 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 15:08:59 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc (count * size);
	if (str == 0)
		return (0);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}

/* int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(10, sizeof(char));
	while (i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
} */