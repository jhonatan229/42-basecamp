/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:31:17 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:54:00 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 97 && str[position] <= 122)
		{
			str[position] = str[position] - 32;
		}
		position++;
	}
	return (str);
}
