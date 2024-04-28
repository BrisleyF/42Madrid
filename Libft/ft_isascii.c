/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>   					+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:51:20 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/17 20:51:26 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
	{
		return (1);
	}
	return (0);
}

// La función ft_isascii determina si un valor entero dado representa
// un carácter ASCII válido. Los caracteres ASCII válidos
// tienen valores enteros en el rango de 0 a 127. 
// Retorna 1 si es un carácter ASCII válido y 0 si no lo es.