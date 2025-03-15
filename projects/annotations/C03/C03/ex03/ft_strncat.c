/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:28 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/21 21:57:39 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d;

	i = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
int     main(void)
{
	unsigned int nb = 10;
        char    dest[] = "catenating123";
        char     src[] = " with a twist";

        printf("%s\n", ft_strncat(dest, src, nb));

        return(0);
}*/
