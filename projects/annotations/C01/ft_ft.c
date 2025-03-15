/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:21:04 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/12 15:49:44 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	nbr = 0; //declaring varible
			 //
	ft_ft(&nbr);//calls function and pass adress of nbr for modifications
	
	printf("la valeur de nbr est : %d", nbr);// ´%d' is take next arguments and print as an int AND '%s' means; print as string..
	return (0);
}*/
