/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <wliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:47:16 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/26 23:14:55 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < size - 1)
	{
		dest[a] = src[a];
		a++;
	}
	if (a == size)
	{
		src[a] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[30];
	
	unsigned int size = 17;
	int results = ft_strlcpy(dest, src, size);

	printf("Sourcelength:%d\n", results);
	printf("Destination:%s\n", dest);

	return (0);
}*/
