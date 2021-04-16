/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:27:38 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/14 23:54:45 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int multi;

	multi = 2;
	if (nb == 2)
		return (1);
	if (nb <= 1)
		return (0);
	while (nb % multi != 0)
	{
		multi++;
		if (multi == nb)
			return (1);
	}
	return (0);
}
