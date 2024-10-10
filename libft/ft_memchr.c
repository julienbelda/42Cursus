/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:17:16 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 17:22:34 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	str[] = "Hello";
	printf("%s\n", ft_memchr(str, 'o', 5));
	printf("%s\n", memchr(str, 'o', 5));
} */