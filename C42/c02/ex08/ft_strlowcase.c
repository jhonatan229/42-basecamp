/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:56:05 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/07 18:59:03 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 65 && str[position] <= 90)
		{
			str[position] = str[position] + 32;
		}
		position++;
	}
	return (str);
}
