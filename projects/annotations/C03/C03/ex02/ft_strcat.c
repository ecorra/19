/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:28 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/21 21:57:39 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0')
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[30] = "cate";
	char	 src[30] = "nating";
	
	printf("%s\n", ft_strcat(dest, src));
	
	return(0);
}*/
