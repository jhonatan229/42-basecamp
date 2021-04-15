/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:24:53 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/12 23:43:45 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int c = 1;
	
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
}

int main()
{
	char c[] = "pedro";
	ft_putstr(c);
}
