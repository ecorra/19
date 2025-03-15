/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 21:54:28 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/21 21:57:39 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/*#include <stdio.h>*/
/* "DESCRIPTION"
       The strcmp() function compares the two strings s1 and s2.  
       The locale is not taken into account (for a locale-
       aware comparison, see strcoll(3)).  The comparison is done using unsigned characters.

       strcmp() returns an integer indicating the result of the comparison, as follows:

       •  0, if the s1 and s2 are equal;

       •  a negative value if s1 is less than s2;

       •  a positive value if s1 is greater than s2.
       */

int     ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n;
	unsigned int	p;
	unsigned int	z;

	i = 0;
	z = 0;
	while (s1[i] == s2[i] || s1[i] < '\0' )
	i++;
	
	if(s1[i] < s2[i])
	{
		n = s1[i] - s2[i];
		return (n);
	}
	else if (s1[i] > s2[i])
	{
		p = s1[i] - s2[i];
		return (p);
	}
	else
		return(z);
}
/*
int	main(void)
{
	char	s1[] = "SpotZEDifference";
	char	s2[] = "SpotTheDifference";

	printf("%s\n", s1);
	printf("%s\n", s2);

	printf("%d\n", ft_strcmp(s1, s2));

	return (0);
}
*/		
