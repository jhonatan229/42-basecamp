/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 16:55:13 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:15:02 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int position;
	int mark;

	mark = 0;
	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 97 && str[position] <= 122)
			mark++;
		else if (str[position] >= 65 && str[position] <= 90)
			mark++;
		position++;
	}
	if (mark == position)
		return (1);
	else
		return (0);
}
