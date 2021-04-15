/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 02:51:38 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/05 20:50:32 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int num)
{
	int		p1;
	int		p2;
	char	dec;
	char	uni;

	p1 = num / 10;
	p2 = num % 10;
	dec = p1 + 48;
	uni = p2 + 48;
	write(1, &dec, 1);
	write(1, &uni, 1);
}

void	ft_print_comb2(void)
{
	int first_number;
	int second_number;

	first_number = 0;
	second_number = first_number + 1;
	while (first_number < 99)
	{
		print_number(first_number);
		write(1, " ", 1);
		print_number(second_number);
		if (first_number != 98)
			write(1, ", ", 2);
		if (second_number == 99)
		{
			first_number++;
			second_number = first_number + 1;
		}
		else
		{
			second_number++;
		}
	}
}
