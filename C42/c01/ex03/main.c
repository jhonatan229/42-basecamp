/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:08:09 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 19:13:34 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a = 3;
	int b = 10;
	int div = 0;
	int mod = 0;
	int *p1 = &div;
	int *p2 = &mod;
	ft_div_mod(a, b, p1, p2);
	printf("a = %i  b = %i\ndiv = %i  mod = %i\n", a, b, div, mod);	
}
