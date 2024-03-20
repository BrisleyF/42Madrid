/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:11:14 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/20 12:30:22 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	z;
	int	w;

	z = *a / *b;
	w = *a % *b;
	*a = z;
	*b = w;
}

/*
int main()
{
    int x = 16;
    int y = 6;
    
    int *ptr1=&x;
    int *ptr2=&y;

    printf("*ptr1:%d *ptr2:%d\n", x, y);
    ft_ultimate_div_mod(ptr1, ptr2);
    printf("*ptr1:%d *ptr2:%d\n", x, y);

    return 0;
}
*/
