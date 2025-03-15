/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:38:53 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/12 16:19:17 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	i; // declaring variables
	int*	ptr1; // 9 pointers 9 variables + new 'í' variable
	int**	ptr2;
	int***	ptr3;
	int****	ptr4;
	int***** ptr5;
	int****** ptr6;
	int******* ptr7;
	int******** ptr8;
	int********* ptr9;

	ptr1 = &i; // prt1 points to x //pointers 1 pointe vers i
	ptr2 = &ptr1; // ptr2 points to ptr1
	ptr3 = &ptr2; // prt3 points to ptr2
	ptr4 = &ptr3; // ect ect...
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	i = 1;
	ft_ultimate_ft(ptr9);
	printf("valeur de i est %d",i ); // '%d'=  print next argument (nbr) as an int
	return(0);
}
