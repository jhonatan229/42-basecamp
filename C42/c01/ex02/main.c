/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:04:48 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 19:07:35 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int a = 24;
	int b = 42;
	int *p1 = &a;
	int *p2 = &b;
	printf("Before: %i  %i\n", a, b);
	ft_swap(p1, p2);
	printf("After: %i  %i\n", a, b);
}