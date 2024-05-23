/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 12:41:43 by brfajard          #+#    #+#             */
/*   Updated: 2024/05/03 12:41:47 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"

// join and free
char	*ft_free(char *line, char *buf)
{
	char	*temp;

	temp = ft_strjoin(line, buf);
	free(line);
	return (temp);
}

static char	*reading(int fd, char *buf, char *backup)
{
	int	count_read;

	count_read = 1;
	while (count_read > 0)
	{
		count_read = read(fd, buf, BUFFER_SIZE);
		// printf("funcion reading => count_read: %d\n", count_read);
		if (count_read == -1)
		{
			free(buf);
			return (NULL);
		}
		else if (count_read == 0)
			break ;
		buf[count_read] = 0;
		if (!backup)
			backup = ft_strdup("");
		backup = ft_free(backup, buf);
		// printf("funcion reading => backup: %s\n", backup);
		if (ft_strchr(buf, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract(char *line)
{
	size_t	i;
	char	*backup;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	if (line[i] == '\0')
	{
		// free(line);
		return (NULL);
	}
	backup = ft_substr(line, i + 1, ft_strlen(line) - i);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[i + 1] = '\0';
	// printf("funcion extract => backup: %s\n", backup);
	return (backup);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		*buf;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (0);
	line = reading(fd, buf, backup);
	// printf("funcion gnl => linea: %s\n", line);
	free(buf);
	buf = NULL;
	if (!line || !*line)
		return (NULL);
	backup = extract(line);
	return (line);
}
