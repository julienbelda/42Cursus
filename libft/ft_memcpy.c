/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:04:49 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 17:24:26 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World";
	printf("%s\n", ft_memcpy(str1, str2, 3));
	printf("%s\n", memcpy(str1, str2, 3));
} */