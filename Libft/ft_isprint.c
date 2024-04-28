/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>   					+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:41:06 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/17 22:41:18 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

// La función ft_isprint determina si un carácter dado es 
// un carácter imprimible en ASCII. Retorna 1 si es 
// un carácter imprimible y 0 si no lo es. 
// Los caracteres imprimibles en ASCII son aquellos
// que pueden ser mostrados y representados visualmente en la pantalla.