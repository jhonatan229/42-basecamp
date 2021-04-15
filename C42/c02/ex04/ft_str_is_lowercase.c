/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:22:53 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:24:50 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int position;
	int mark;

	position = 0;
	mark = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 97 && str[position] <= 122)
			mark++;
		position++;
	}
	if (mark == position)
		return (1);
	else
		return (0);
}
