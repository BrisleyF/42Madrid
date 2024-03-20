/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:29:01 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/23 12:53:04 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 32;
			str[i] = c;
		}
		i++;
	}
	return (str);
}

/*int main()
{
	char	c[20] = "hola mundo";
	int i = 0;
	
	while (i < 20){
		printf("%c",c[i]);
		i++;
	}

	ft_strupcase(c);
	printf("\n");
	i=0;
	while (i < 20){
		printf("%c",c[i]);
		i++;
	}
}*/