/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:31:39 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/12 16:41:51 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


	void	ft_swap(int *a, int *b)
{
	int i;

	i = *a; // writes value pointed (*a) into int i
	*a = *b; // Set a value to value pointed by b
	*b = i;  // Set b value to original value of a (stored in i)
}


/*
 int	main(void)
{
	
	int a;
	int b;
	a = 5;
	b = 3;
	ft_swap(&a, &b);
	printf("%d",a );
        return (0);
}	*/
