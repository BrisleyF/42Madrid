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

static char	*function_name(int fd, char *buf, char *backup)
{
	int		read_line;
	char	*char_temp;

	read_line = 1;
	while (read_line != '\0')
	{
		read_line = read(fd, buf, BUFFER_SIZE);
		if (read_line == -1)
			return (0);
		else if (read_line == 0)
			break ;
		buf[read_line] = '\0';
		if (!backup)
			backup = ft_strdup("");
		char_temp = backup;
		backup = ft_strjoin(char_temp, buf);
		free(char_temp);
		char_temp = NULL;
		if (ft_strchr (buf, '\n'))
			break ;
	}
	return (backup);
}

static char	*extract(char *line)
{
	size_t	count;
	char	*backup;

	count = 0;
	while (line[count] != '\n' && line[count] != '\0')
		count++;
	if (line[count] == '\0' || line[1] == '\0')
		return (0);
	backup = ft_substr(line, count + 1, ft_strlen(line) - count);
	if (*backup == '\0')
	{
		free(backup);
		backup = NULL;
	}
	line[count + 1] = '\0';
	return (backup);
}

char *get_next_line(int fd)
{
    char  *read_bytes;
    char *write_bytes;
    static char	*backup;

    if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);

    write_bytes = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));

    if (!write_bytes)
        return (0);

    read_bytes = function_name(fd, write_bytes, backup);

    free(write_bytes);
    write_bytes = NULL;

    if (!read_bytes)
		return (NULL);

    backup = extract(read_bytes);
    return (read_bytes);

}
