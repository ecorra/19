/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:57:48 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/26 22:56:25 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	if (a < n)
		dest[a] = '\0';
	return (dest);
}
/*
int     main(void)
{
	char src[30] = "source";
	char dest[30] = "destination";
	unsigned int n = 3;
	
	printf("%s\n", src);
	printf("%s\n", dest);

	ft_strncpy(dest, src, n);
	
	printf("%s\n", src);
	printf("%s\n", dest);
	
	return (0);
}*/
