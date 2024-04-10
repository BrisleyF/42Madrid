/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:53:27 by brfajard          #+#    #+#             */
/*   Updated: 2024/04/10 19:53:30 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función ft_putendl_fd primero escribe la cadena de caracteres s en el
// archivo descriptor de archivo fd, y luego escribe un carácter de salto de
// línea ('\n').
// 

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], sizeof(s[i]));
		i++;
	}
	write(fd, "\n", 1);
}
