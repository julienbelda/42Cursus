/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:42:11 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 17:23:18 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[j])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[j]);
		i++;
		j++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "hello";
	printf("%d\n", ft_memcmp(str1, str2, 5));
	printf("%d\n", memcmp(str1, str2, 5));
} */