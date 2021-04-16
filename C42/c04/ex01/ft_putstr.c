/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:52:14 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/12 22:54:16 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int pointer;

	pointer = 0;
	while (str[pointer] != '\0')
	{
		write(1, &str[pointer], 1);
		pointer++;
	}
}
