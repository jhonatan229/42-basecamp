/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 22:47:46 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/12 22:49:19 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int pointer;

	pointer = 0;
	while (str[pointer] != '\0')
	{
		pointer++;
	}
	return (pointer);
}
