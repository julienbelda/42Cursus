/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:17:16 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 17:50:27 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Check 1ère occurence d'une valeur int interprété en char dans un bloc de mémoire
	@ s -> Bloc de mémoire dans lequelle cherché
	@ c -> Code numérique de l'objet à cherché
	@ size -> taille du bloc dans lequelle chercher
*/

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
	char	str[] = "julien";
	char	*result = ft_memchr(str, 'u', 6);
	printf("%s", result);
} */