/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:15:01 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 22:23:26 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Recherche la 1ère occurence d'une sous-chaine de caractère -> needle
	@ Dans la chaine -> haystack
	@ La recherche se fait dans les -> len 1er caractère de haystack
*/

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

int	main(void)
{
	char	haystack[] = "salut jul cava";
	char	needle[] = "jul";
	printf("%s\n", ft_strnstr(haystack, needle, 9));
	printf("%s\n", strnstr(haystack, needle, 9));
}
