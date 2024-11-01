/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:19:05 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 19:51:12 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Copie un bloc de mémoire -> src
	@ De la taille -> len
	@ Dans un new emplacement -> dest
	@ Chevauchement de mémoire possible
*/

void	*ft_memmove(void *dest, void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (((char *)dest) < ((char *)src))
	{
		while (i < len)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	str1[] = "Salut";
	char	str2[] = "cava";
	printf("%s\n", ft_memmove(str1, str2, 3));
	printf("%s\n", memmove(str1, str2, 3));
} */