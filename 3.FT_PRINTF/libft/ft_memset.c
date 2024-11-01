/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:14:14 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 19:50:53 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	@ Remplie une zone mémoire identifier par son adresse et sa taille : 
	@ b -> Adresse du bloc à réinitialiser.
	@ c -> Valeur utiliser pour remplir le bloc.
	@ len -> Nb d'octects à initialiser.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

/* int main()
{
    char b[7] = "salut";
    printf("%s\n", b);
	ft_memset(b, 'j', 5);
    printf("%s\n", b);
} */