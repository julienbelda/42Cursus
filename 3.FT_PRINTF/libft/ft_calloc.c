/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:44:50 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 17:41:31 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Alloue un bloc de mémoire en mettant tous les ocects à 0 
	@ count -> NB d'élément consécutif à réserver dans le bloc mémoire
	@ fixer la taille d'un élément en NB d'octects
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc (count * size);
	if (str == NULL)
		return (NULL);
	while (i < count * size)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}

/* int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = ft_calloc(10, sizeof(char));
	while (i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
} */