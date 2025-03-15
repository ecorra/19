/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:18:58 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/26 22:49:35 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		j++;
	}
	i = i + j;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0' && d < size)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	if (d < size)
		dest[size] = '\0';
	return (ft_strlen(dest, src));
}
/*
int	main(void)
{
	char	dest[30] = "catenating";
	char	src[30] = " with a twist yo";
	unsigned int    size;
	
	size = 23;

	ft_strlcat(dest, src, size);
	printf("%s\n", dest);
	printf("%d\n", ft_strlen(dest, src));
	return(0);
}*/
