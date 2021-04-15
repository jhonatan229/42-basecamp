/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:30:14 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 19:22:49 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int pointer;
	int count;
	int aux;

	pointer = 0;
	count = pointer + 1;
	while (pointer < size)
	{
		while (count < size)
		{
			if (tab[pointer] > tab[count])
			{
				aux = tab[pointer];
				tab[pointer] = tab[count];
				tab[count] = aux;
			}
			count++;
		}
		
		pointer++;
		count = pointer + 1;
	}
}
