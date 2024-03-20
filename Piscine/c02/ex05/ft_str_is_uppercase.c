/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:30:44 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/22 12:22:45 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z' && i == 1)
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
	char c[] = "";
	int resultado = ft_str_is_uppercase(c);
	printf("%d", resultado);
}*/
