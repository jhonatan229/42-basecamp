/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:57:17 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/13 19:23:41 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int total;

	if (nb < 0)
		return (0);
	total = 1;
	while (nb != 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
