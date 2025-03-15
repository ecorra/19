/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:28 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/21 21:57:39 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				n;

	i = 0;
	if (!s1[i] && !s2[i])
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	n = s1[i] - s2[i];
	return (n);
}
/*
int	main(void)
{
	char	s1[] = "CalculateASCIIdifference";
	char	s2[] = "CalculateASCIIdifferencial";

	printf("%s\n", s1);
	printf("%s\n", s2);

	printf("%d\n", ft_strcmp(s1, s2));

	return (0);
}*/	
