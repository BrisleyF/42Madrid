/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:31:10 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/23 11:21:30 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 32 && *str <= 126 && i == 1)
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

/*int	main()
{
	char	c[] = "ÇÑ";
	int	resultado = ft_str_is_printable(c);
	printf("%d", resultado);
}*/
