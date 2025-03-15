/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:16:16 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/12 18:20:10 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int i = *a;// initiate variable i
	int x = *b;// initiate variable x
	
	*a = i / x;// division results saved in *a
	*b = i % x;// modulus remainder saved in *b
}
/*
int	main(void)
{
	int	a;// set variable for value setting next
	int	b;
	
	a = 10;// value setting
	b = 3;

	ft_ultimate_div_mod(&a, &b);//adress for a & b (&a, &b)
        printf("%d\n", a);// a holds results
        printf("%d\n", b);// b holds results

	return (0);
}*/
