/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:25:12 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/13 20:55:25 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int total;

	total = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
