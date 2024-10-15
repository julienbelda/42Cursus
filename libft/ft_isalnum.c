/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:20:01 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 17:43:58 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @ Check si un caractère est numérique
*/

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') \
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", isalnum('a'));
} */