/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:17:00 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:20:27 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int position;
	int mark;

	position = 0;
	mark = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 48 && str[position] <= 57)
			mark++;
		position++;
	}
	if (mark == position)
		return (1);
	else
		return (0);
}
