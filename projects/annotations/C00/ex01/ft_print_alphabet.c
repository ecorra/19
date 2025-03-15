/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:37:11 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/06 16:47:40 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>  

void	ft_print_alphabet(void)

{
	char	x;

	x = 'a';
	while (x <= 'z')
	{
		write (1, &x, 1);
		x++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
