/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:19:59 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 17:44:33 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* @ Check si un caractère est un digit
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* int main(void)
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", isdigit('a'));
} */