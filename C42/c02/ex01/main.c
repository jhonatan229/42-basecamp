/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:56:07 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/15 19:58:27 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	char *str = "harry potter";
	char *dest;
	ft_strncpy(dest, str, 5);
	printf("origin: %s\n", str);
	printf("Dest: %s\n", dest);
}