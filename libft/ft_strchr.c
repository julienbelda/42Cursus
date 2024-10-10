/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:14:11 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 15:13:00 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/* 
int	main(void)
{
	
	const char    s[] = "Welcome my friends see/+you-later";
	printf("%s\n", ft_strchr(s, 'e'));
	printf("%s\n", strchr(s, 'e'));
} */