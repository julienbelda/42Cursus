/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:41:52 by julienbelda       #+#    #+#             */
/*   Updated: 2024/11/11 11:22:18 by julienbelda      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_new_stash(char *new_stash)
{
	int		i;
	int		j;
	char	*new_line;

	i = 0;
	j = 0;
	if (new_stash == NULL)
		return (NULL);
	while (new_stash[i] != '\0' && new_stash[i] != '\n')
		i++;
	if (new_stash[i] == '\n')
		i++;
	new_line = malloc(sizeof(char) * ft_strlen(new_stash) - i + 1);
	if (new_line == NULL)
		return (NULL);
	while (new_stash[i] != '\0')
	{
		new_line[j] = new_stash[i];
		i++;
		j++;
	}
	free (new_stash);
	new_line[j] = '\0';
	return (new_line);
}

char	*ft_extract_line(char *stash)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	if (stash == NULL)
		return (NULL);
	while (stash[i] != '\0' && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = malloc(sizeof(char) * i + 1);
	if (line == NULL)
		return (NULL);
	while (j < i)
	{
		line[j] = stash[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*ft_fill_stash(int fd, char *stash)
{
	char	*buff;
	int		rd;

	rd = 1;
	buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buff == NULL)
		return (NULL);
	while (rd != 0 && ft_strchr(stash, '\n') == 0)
	{
		rd = read(fd, buff, BUFFER_SIZE);
		if (rd < 0)
		{
			free (buff);
			return (NULL);
		}
		buff[rd] = '\0';
		stash = ft_strjoin (stash, buff);
	}
	free (buff);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0 || read(fd, 0, 0) < 0)
	{
		free (stash);
		stash = 0;
		return (NULL);
	}
	if (stash == NULL)
	{
		stash = malloc(sizeof(char) * 1);
		stash[0] = 0;
	}
	stash = ft_fill_stash(fd, stash);
	if (*stash == 0)
	{
		free (stash);
		return (stash = 0);
	}
	line = ft_extract_line(stash);
	stash = ft_new_stash(stash);
	return (line);
}

/* int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		printf("%s", line);
		if (line == NULL)
			break ;
		free(line);
	}
	return (0);
} */