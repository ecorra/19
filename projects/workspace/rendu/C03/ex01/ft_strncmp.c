/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:28 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/21 21:57:39 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				r;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (i == n)
		return (0);
	r = s1[i] - s2[i];
	return (r);
}
/*
int     main(void)
{
	char    s1[] = "SpottheDifference";
	char    s2[] = "SpottheDifferEnce";
	unsigned int n = 6;
	
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%d\n", ft_strncmp(s1, s2, n));
	
	return (0);
}*/
