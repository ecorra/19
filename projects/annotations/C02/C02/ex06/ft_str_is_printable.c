/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:53:34 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/26 18:29:11 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < ' ' || str[a] > '~')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
int     main(void)
{
        char str[] = "printable"; // CRTL + H to type backspace non printabl(\b)
	int results = ft_str_is_printable(str);
        
	printf("%d\n", results);
        
	return (0);
}
*/
