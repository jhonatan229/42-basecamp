/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jestevam <jestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:32:07 by jestevam          #+#    #+#             */
/*   Updated: 2021/04/04 18:59:18 by jestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	what_print(int x, int y);
void	number_plus_and_print(int n, char c);

int g_p_x;
int g_p_y;

void	rush(int x, int y)
{
	g_p_y = 1;
	g_p_x = 1;
	if (x == 0 || y == 0)
		return ;
	while (g_p_y <= y)
	{
		while (g_p_x <= x)
		{
			what_print(x, y);
		}
		number_plus_and_print(2, '\n');
		g_p_x = 1;
	}
}

void	what_print(int x, int y)
{
	if ((g_p_y == 1 && g_p_x == 1) || (g_p_y == 1 && g_p_x == x))
		number_plus_and_print(1, 'A');
	else if ((g_p_y == y && g_p_x == 1) || (g_p_y == y && g_p_x == x))
		number_plus_and_print(1, 'C');
	else if (g_p_y == 1 || g_p_y == y || g_p_x == 1 || g_p_x == x)
		number_plus_and_print(1, 'B');
	else
		number_plus_and_print(1, ' ');
}

void	number_plus_and_print(int n, char c)
{
	ft_putchar(c);
	if (n == 1)
		g_p_x++;
	else
		g_p_y++;
}
