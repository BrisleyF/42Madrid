/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:36:11 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/20 12:34:32 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

/*
int main()
{
    char *c ="aguacate12";
 
    if(c){
        ft_strlen(c);
        int n = ft_strlen(c);
         printf("Hay %d caracter/es en el puntero",n);
    }else{
        printf("Puntero vacio");
    }

    return 0;
}
*/
