/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 19:00:26 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/09 20:56:55 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verify_char(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c > 47 && c < 58))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int comp;
	int position;

	comp = 0;
	position = comp + 1;
	while (str[comp] != '\0')
	{
		if (str[comp] >= 65 && str[comp] <= 90)
			str[comp] = str[comp] + 32;
		comp++;
	}
	comp = 0;
	while (str[position] != '\0')
	{
		if (comp == 0 && (str[comp] >= 97 && str[comp] <= 122))
			str[comp] = str[comp] - 32;
		else if (ft_verify_char(str[comp]) != 1)
			if (str[position] >= 97 && str[position] <= 122)
				str[position] = str[position] - 32;
		comp++;
		position = comp + 1;
	}
	return (str);
}
