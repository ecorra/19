/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:45:06 by ecorra            #+#    #+#             */
/*   Updated: 2025/02/09 15:18:23 by ecorra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c);
void    ft_putchar(char c)
{
        write(1, &c, 1);
}
void    rush(int x, int y)
{
        int i;
        int j;
        if (x <= 0 || y <= 0) // in this context '||' means or/else (fucntion stop script in case values are negative)
                return;
        i = 0;
        while (i < y)
        {       j = 0;
                while (j < x)
                {
                        if ((i == 0 && j == 0) || (i == 0 && j == x - 1)) // ( '&&' means 'and', '==' means 'equal to' (if i equals 0 and j = 0)
                                ft_putchar('A');// (write A)
                        else if ((i == y - 1 && j == 0) || (i == y - 1 && j == x - 1))// (if i == y -1 AND j == 0 OR if i == y -1 AND j equals x-1)
                                ft_putchar('C');// (write C)
                        else if (i == 0 || i == y - 1 || j == 0 || j == x - 1)// (if i == 0 or i == y-1 or j == 0 or j == x-1)
                                ft_putchar('B');// (write B)
                        else
                                ft_putchar(' ');// (write  nothing, in this context we need a rectangle)
                        j++;// (increment j +1 every loop if met conditions)
                }
                ft_putchar('\n');// ('\n' means new line)
                i++;// (increment i+1 each loop if met conditions)
        }
}
int	main()
{
	rush(3, 3);
	return (0);
}


