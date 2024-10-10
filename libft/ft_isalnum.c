/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:20:01 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 15:16:24 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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