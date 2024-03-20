/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:22:21 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:23 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] + 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char	c[10] = "MUNDO HOLA";
	int i = 0;
	
	while (i < 10){
		printf("%c",c[i]);
		i++;
	}

	ft_strlowcase(c);
	printf("\n");
	i=0;
	while (i < 10){
		printf("%c",c[i]);
		i++;
	}
}*/