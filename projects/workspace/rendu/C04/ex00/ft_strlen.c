/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 23:46:11 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/27 00:17:56 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	unsigned int	i;
	char	str[] = "i wonder how many elelements are in this";
	
	i = ft_strlen(str);
	printf("Lenght is :%d\n", i);

	return (0);
}*/
