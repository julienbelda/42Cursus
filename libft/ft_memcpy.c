/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:04:49 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 18:04:36 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Copie un bloc de mémoire -> src
	@ De la taille -> n 
	@ Dans le nouvelle emplacement dest
*/

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
	char	str1[] = "Salut";
	char	str2[] = "cava";
	printf("%s\n", ft_memcpy(str1, str2, 3));
	printf("%s\n", memcpy(str1, str2, 3));
} */