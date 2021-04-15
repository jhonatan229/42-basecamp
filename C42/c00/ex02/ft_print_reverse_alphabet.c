/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 22:00:14 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/05 20:38:43 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_count_number;

void	ft_print_reverse_alphabet(void)
{
	g_count_number = 122;
	while (g_count_number >= 97)
	{
		write(1, &g_count_number, 1);
		g_count_number--;
	}
}
