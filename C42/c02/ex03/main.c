/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:09:05 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 20:11:02 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);
void	print_result(char *str);

int		main(void)
{
	char *str1 = "0219343";
	char *str2 = "1upon2Time";

	printf("%s\n", str1);
	print_result(str1);
	printf("-------------------\n%s\n", str2);
	print_result(str2);
}

void print_result(char *str)
{
	if(ft_str_is_numeric(str) == 1)
		printf("is a numeric.\n");
	else
		printf("not is a full numeric.\n");
}