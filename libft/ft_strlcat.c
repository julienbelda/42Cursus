/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:45:21 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 15:12:40 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	if (destsize < ft_strlen(dest))
		return (ft_strlen(src) + destsize);
	else
		len = ft_strlen(src) + ft_strlen(dest);
	while (dest[i])
		i++;
	while (src[j] && i + 1 < destsize)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len);
}

/* int	main(void)
{
	char	dest[10] = "Hello";
	char	src[] = "World";
	printf("%lu\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
} */