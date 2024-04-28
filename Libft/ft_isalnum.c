/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>   					+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 20:26:43 by brfajard          #+#    #+#             */
/*   Updated: 2024/03/17 20:26:46 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
	{
		return (1);
	}
	return (0);
}

// La función ft_isalnum determina si un carácter 
// dado es alfanumérico, es decir, si es una letra del alfabeto
// (mayúscula o minúscula) o un dígito en el conjunto de caracteres ASCII (0-9).
// Retorna 1 si es alfanumérico y 0 si no lo es. 
// Esta función utiliza las funciones ft_isdigit 
// y ft_isalpha previamente definidas en la biblioteca libft.