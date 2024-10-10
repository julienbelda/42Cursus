/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:12:32 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 15:12:33 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	const char    s[] = "Welcome my friends see/+you-later";
	printf("%lu\n", ft_strlen(s));
	printf("%lu\n", strlen(s));
} */