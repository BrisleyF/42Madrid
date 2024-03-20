/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brfajard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:53:54 by brfajard          #+#    #+#             */
/*   Updated: 2024/02/16 12:07:18 by brfajard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
 int main()
{
    int z = 10;
    int *ptr1;
    ptr1 = &z;
    
    int y = 20;
    int *ptr2;
    ptr2 = &y;
    
    printf("*ptr1:%d *ptr2:%d\n", *ptr1, *ptr2);
    ft_swap(ptr1, ptr2);
    printf("*ptr1:%d *ptr2:%d\n", *ptr1, *ptr2);

    return 0;
}
 */
