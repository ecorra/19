/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 14:56:51 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/12 18:45:45 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1); // here don't use & because passing the adress of the string not adreess of pointer
		str++;		  
	}
}
/*
int	main(void)
{
	char	*str = "qwertyuiopasdfgh";
	ft_putstr(str);
	return(0);
}^/
