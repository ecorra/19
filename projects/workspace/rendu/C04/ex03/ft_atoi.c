/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 02:19:21 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/27 02:55:20 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/* "##this was confusing af refer to this everytime you come back to this##"
 * "1:'Long' res is a designation to have int store larger interger than 
 * the 'int' designation"
 * "2: Skip 'whitespace char's, this is important coz we only want to interprer intergers"
 * "3: + and - signs "
 * "4: if numerical and not INT_MAX or INT_MIN, had to look this up so take the time to understand this part //return (j == 1) ? 2147483647 : -2147483648;// this gives you either INT_MAX or INT_MIN resulsts but HOW??FUCK ME" 
 * */
int	ft_atoi(char *str)
{
	int	i;
	int	j;
	long	results;

	i = 0;
	j = 1;
	results = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j = j * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (results > 2147483647)

		
		
		results = (str[i] - '0') + (results * 10);
			i++;
	}
	return (results * j);
}
