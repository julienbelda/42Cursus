/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:41:58 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/14 16:55:04 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

/*
int main(void)
{
	
	const char    s[] = "hello bro";
	printf("%s\n", ft_strchr(s, 'e'));
	printf("%s\n", strchr(s, 'e'));
}*/