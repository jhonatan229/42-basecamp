/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:27:34 by ibraz-da          #+#    #+#             */
/*   Updated: 2021/04/12 02:15:07 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush01.h"

void	write_message(char *str);
void	rush(char *constraints);

int		ft_str_is_numeric(char c)
{
	if ((c < '0') || (c > '9'))
		return (0);
	return (1);
}

char	*ft_strcpy_digits(char *dest, char *src)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		if (ft_str_is_numeric(src[c]))
		{
			*dest = src[c];
			dest++;
		}
		c++;
	}
	*dest = '\0';
	return (dest);
}

int		is_valid_params(int i, char *argv)
{
	char sum;

	if (i == 0)
	{
		while (i < 4)
		{
			sum = (argv[i] + argv[i + 4]) - 48;
			if (sum > '5' || sum < '3')
				return (0);
			i++;
		}
	}
	else if (i == 8)
	{
		while (i < 12)
		{
			sum = (argv[i] + argv[i + 4]) - 48;
			if (sum > '5' || sum < '3')
				return (0);
			i++;
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		is_col_valid;
	int		is_line_valid;
	char	*dest;

	if (argc != 2)
	{
		write_message("Error\n");
		return (1);
	}
	argv++;
	dest = malloc(17);
	dest[0] = 0;
	ft_strcpy_digits(dest, *argv);
	is_col_valid = is_valid_params(0, dest);
	is_line_valid = is_valid_params(8, dest);
	if (!is_col_valid || !is_line_valid)
	{
		write_message("Error\n");
		return (1);
	}
	rush(dest);
	free(dest);
	return (0);
}
