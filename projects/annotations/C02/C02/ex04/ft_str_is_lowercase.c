/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:28 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/21 21:57:39 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
		{
			return (0);
		}
		a++;
	}
	return (1);
}
/*
int	main(void)
{
	char str[] = "lowercase";//declare str[]
	int results = ft_str_is_lowercase(str);//declase return
	printf("%d\n", results);
	return (0);
}*/
