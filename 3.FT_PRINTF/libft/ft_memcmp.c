/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:42:11 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 17:50:06 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Compare le contenu de 2 bloc de mémoire
	@ s1 -> Adresse du 1er bloc à comparer
	@ s2 -> Adresse du 2ème bloc à comparer
	@ size -> NB d'octects maximal à comparer
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	str1[] = "Julien";
	char	str2[] = "julien";
	printf("%d\n", ft_memcmp(str1, str2, 5));
	printf("%d\n", memcmp(str1, str2, 5));
} */