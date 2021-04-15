/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 04:09:40 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 18:48:00 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_count_number;

void	ft_print_alphabet(void)
{
	g_count_number = 97;
	while (g_count_number <= 122)
	{
		write(1, &g_count_number, 1);
		g_count_number++;
	}
}
