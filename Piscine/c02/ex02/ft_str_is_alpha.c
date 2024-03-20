/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:55:11 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/21 12:55:31 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 1;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z' && i == 1)
		{
			i = 1;
		}
		else if (*str >= 'A' && *str <= 'Z' && i == 1)
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
	char c[] = "aBcD * &";
	int resultado = ft_str_is_alpha(c);
	printf("%d", resultado);
}*/
