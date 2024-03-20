/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:46:58 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/21 13:51:27 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9' && i == 1)
		{
			i = 1;
		}
		else
		{
			i = 0;
		}
		str++;
	}
	return (i);
}

/*int main()
{
	char c[] = "jasjBHK *&";
	int resultado = ft_str_is_numeric(c);
	printf("%d", resultado);
}*/