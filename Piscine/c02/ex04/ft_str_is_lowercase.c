/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:20:28 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/21 14:20:32 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' && i == 1)
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
	char c[] = "JDDKLFDSF";
	int resultado = ft_str_is_lowercase(c);
	printf("%d", resultado);
}*/