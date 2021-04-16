/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:13:05 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/14 23:52:23 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int mark;

	mark = 0;
	if (nb == 2147483647)
		return (0);
	while (mark <= nb && (mark * mark) < nb)
		mark++;
	if ((mark * mark) == nb)
		return (mark);
	else
		return (0);
}
