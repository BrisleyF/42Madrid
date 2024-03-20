/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:42:02 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/20 12:27:50 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
    int z = 16;
    int y = 6;
    
    int *ptr1=&z;
    int *ptr2=&y;

    printf("*ptr1:%d *ptr2:%d\n", z, y);
    ft_div_mod(z, y, ptr1, ptr2);
    printf("*ptr1:%d *ptr2:%d\n", z, y);

    return 0;
}
*/
