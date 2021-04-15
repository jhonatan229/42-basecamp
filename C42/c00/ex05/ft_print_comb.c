/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:22:17 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/05 20:49:48 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char one, char two, char thre)
{
	write(1, &one, 1);
	write(1, &two, 1);
	write(1, &thre, 1);
	if (!(one == 55 && two == 56))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char number_one;
	char number_two;
	char number_thre;

	number_one = 48;
	number_two = number_one + 1;
	number_thre = number_two + 1;
	while (number_one <= 55)
	{
		print_numbers(number_one, number_two, number_thre);
		if (number_thre == 57)
		{
			number_two++;
			number_thre = number_two + 1;
			if (number_two == 57)
			{
				number_one++;
				number_two = number_one + 1;
				number_thre = number_two + 1;
			}
		}
		else
			number_thre++;
	}
}
