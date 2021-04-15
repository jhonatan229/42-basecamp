/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:39:25 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 19:55:05 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int 	main(void)
{
	char *str = "harry potter";
	char *dest;
	ft_strcpy(dest, str);
	printf("%s\n", dest);
}