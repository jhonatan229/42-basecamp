/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:04:06 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/09 00:57:44 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int position;
	int position2;

	position2 = 0;
	position = 0;
	while (dest[position] != '\0')
	{
		position++;
	}
	while (src[position2] != '\0')
	{
		dest[position] = src[position2];
		position2++;
		position++;
	}
	dest[position] = '\0';
	return (dest);
}
