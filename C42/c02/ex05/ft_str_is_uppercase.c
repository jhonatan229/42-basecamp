/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:25:55 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:26:37 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int position;
	int mark;

	position = 0;
	mark = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 65 && str[position] <= 90)
			mark++;
		position++;
	}
	if (mark == position)
		return (1);
	else
		return (0);
}
