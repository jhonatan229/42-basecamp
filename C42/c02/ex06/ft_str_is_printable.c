/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:27:55 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:29:34 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int position;
	int mark;

	position = 0;
	mark = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 32 && str[position] <= 126)
			mark++;
		position++;
	}
	if (mark == position)
		return (1);
	else
		return (0);
}
