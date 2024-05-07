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

char *get_next_line(int fd)
{
    int  read_bytes;
    char *write_bytes;
    static char	*backup;

    if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);

    write_bytes = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));

    if (!write_bytes)
        return (0);
    read_bytes = read(fd, write_bytes, 3);

    free(write_bytes);
    write_bytes = NULL;

    if (!read_bytes)
		return (NULL);

    backup = extract(read_bytes);
    return (write_bytes);

}
