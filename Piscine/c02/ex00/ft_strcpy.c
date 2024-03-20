/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:38:08 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/21 11:50:10 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main()
{
	char dest[20] = "Contenido de dest";
	char src[] = "String de src";

	printf("Dest Antes: %s\n", dest);

	ft_strcpy(dest, src);

	printf("Dest Despues: %s\n", dest);
}*/
