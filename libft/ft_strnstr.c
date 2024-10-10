/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:15:01 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 15:08:27 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while ((haystack[i] && i < len))
	{
		j = 0;
		while ((needle[j] == haystack[i + j] && (i + j) < len))
		{
			if (needle[j + 1] == '\0')
				return (&((char *)haystack)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	haystack[] = "Hello my friends see you later";
	char	needle[] = "friends";
	printf("%s\n", ft_strnstr(haystack, needle, 30));
	printf("%s\n", strnstr(haystack, needle, 30));
} */
