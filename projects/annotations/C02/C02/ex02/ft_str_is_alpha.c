/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:30:32 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/25 20:47:51 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || (str[a] > 'Z' && str[a] < 'a')
			|| str[a] > 'z')
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
        char str[] = "ftf234risqlpha";
        int result = ft_str_is_alpha(str);
        printf("%d\n", result);
        return (0);
}*/
