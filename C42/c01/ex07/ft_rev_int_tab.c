/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:40:33 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 19:21:02 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int aux;

	start = 0;
	while (start != size / 2)
	{
		aux = tab[start];
		tab[start] = tab[(size - 1) - start];
		tab[(size - 1) - start] = aux;
		start++;
	}
}
