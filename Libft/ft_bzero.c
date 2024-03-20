/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:07:27 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/20 16:07:40 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// La función bzero en C se utiliza para establecer los primeros n
// bytes de un bloque de memoria a cero. Es similar a memset, 
// pero específicamente para establecer bytes en cero. 
// La función bzero es útil cuando necesitas limpiar un bloque 
// de memoria, como inicializar una estructura 
// o un búfer de datos, antes de usarlo.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
