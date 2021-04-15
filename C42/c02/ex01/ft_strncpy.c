/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:09:08 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/12 22:12:22 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int pointer;

	pointer = 0;
	while (pointer < n && src[pointer] != '\0')
	{
		dest[pointer] = src[pointer];
		pointer++;
	}
	while (pointer < n)
	{
		dest[pointer] = '\0';
		pointer++;
	}
	return (dest);
}
