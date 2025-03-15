/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorra <eliacorra@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 14:43:21 by ecorra            #+#    #+#             */
/*   Updated: 2025/03/27 14:43:21 by ecorra           ###   ########.fr       */
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

