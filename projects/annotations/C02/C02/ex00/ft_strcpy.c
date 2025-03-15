/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 20:32:46 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/25 20:24:44 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[30] = "source";
	char dest[30] = "destination";

	printf("%s\n", src);
	printf("%s\n", dest);

	ft_strcpy(dest, src);

	printf("%s\n", src);
	printf("%s", dest);

	return (0);
}*/
