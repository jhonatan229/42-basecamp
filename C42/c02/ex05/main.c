/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:11:38 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 20:14:58 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);
void	print_result(char *str);

int		main(void)
{
	char *str1 = "ONCEUPONATIME";
	char *str2 = "OnceUponATime";

	printf("%s\n", str1);
	print_result(str1);
	printf("-------------------\n%s\n", str2);
	print_result(str2);
}

void print_result(char *str)
{
	if(ft_str_is_uppercase(str) == 1)
		printf("is a upper alphabet.\n");
	else
		printf("not is a full upper alphabet.\n");
}