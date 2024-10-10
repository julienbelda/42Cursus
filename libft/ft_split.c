/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubelda <jubelda@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:18:03 by julienbelda       #+#    #+#             */
/*   Updated: 2024/10/10 16:38:11 by jubelda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *str, char delim)
{
	size_t	count;

	if (!*str)
		return (0);
	count = 0;
	while (*str)
	{
		while (*str == delim)
			str++;
		if (*str)
			count++;
		while (*str != delim && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *str, char delim)
{
	char	**tab;
	size_t	word_len;
	int		i;

	tab = (char **)malloc((ft_count_word(str, delim) + 1) * sizeof(char *));
	if (!str || !tab)
		return (0);
	i = 0;
	while (*str)
	{
		while (*str == delim && *str)
			str++;
		if (*str)
		{
			if (!ft_strchr(str, delim))
				word_len = ft_strlen(str);
			else
				word_len = ft_strchr(str, delim) - str;
			tab[i++] = ft_substr(str, 0, word_len);
			str += word_len;
		}
	}
	tab[i] = NULL;
	return (tab);
}

/* int	main(void)
{
	char	**tab;
	size_t	i;

	tab = ft_split("Hello my friends see you later", ' ');
	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
} */