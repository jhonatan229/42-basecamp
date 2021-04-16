/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 00:40:58 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/13 00:21:56 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int position;
	unsigned int position2;

	position2 = 0;
	position = 0;
	while (dest[position] != '\0')
	{
		position++;
	}
	while (position2 < nb && src[position2] != '\0')
	{
		dest[position] = src[position2];
		position2++;
		position++;
	}
	dest[position] = '\0';
	return (dest);
}
