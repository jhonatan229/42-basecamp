/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibraz-da <ibraz-da@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 23:42:13 by ibraz-da          #+#    #+#             */
/*   Updated: 2021/04/12 00:33:32 by ibraz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	print_board(char board[G_LINE][G_COL])
{
	int i;
	int j;

	i = -1;
	while (++i < G_LINE)
	{
		j = -1;
		while (++j < G_COL)
		{
			if (board[i][j] == 0)
				ft_putchar('0');
			else
				ft_putchar(board[i][j]);
			if (j != (G_COL - 1))
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

void	set_column(char board[G_LINE][G_COL], char top, char down, int col)
{
	if (top == '4' && down == '1')
	{
		board[0][col] = '1';
		board[1][col] = '2';
		board[2][col] = '3';
		board[3][col] = '4';
	}
	else if (top == '1' && down == '4')
	{
		board[0][col] = '4';
		board[1][col] = '3';
		board[2][col] = '2';
		board[3][col] = '1';
	}
	else if (top == '3' && down == '2')
		board[2][col] = '4';
	else if (top == '1' && down == '2')
		board[3][col] = '3';
	else if (top == '2' && down == '1')
		board[0][col] = '3';
	else if (top == '1')
		board[0][col] = '4';
	else if (down == '1')
		board[4][col] = '4';
}

void	set_line(char board[G_LINE][G_COL], char left, char right, int line)
{
	if (left == '4' && right == '1')
	{
		board[line][0] = '1';
		board[line][1] = '2';
		board[line][2] = '3';
		board[line][3] = '4';
	}
	else if (left == '1' && right == '4')
	{
		board[line][0] = '4';
		board[line][1] = '3';
		board[line][2] = '2';
		board[line][3] = '1';
	}
	else if (left == '3' && right == '2')
		board[line][2] = '4';
	else if (left == '1' && right == '2')
		board[line][3] = '3';
	else if (left == '2' && right == '1')
		board[line][0] = '3';
	else if (left == '1')
		board[line][0] = '4';
	else if (right == '1')
		board[line][3] = '4';
}

void	guess_columns(char board[G_LINE][G_COL], char *constraints)
{
	int		col;
	char	up_constraint;
	char	down_constraint;

	col = -1;
	while (++col < 4)
	{
		up_constraint = *constraints;
		down_constraint = *(constraints + 4);
		set_column(board, up_constraint, down_constraint, col);
		constraints++;
	}
}

void	guess_lines(char board[G_LINE][G_COL], char *constraints)
{
	int		line;
	char	left_constraint;
	char	right_constraint;

	line = -1;
	while (++line < 4)
	{
		left_constraint = *constraints;
		right_constraint = *(constraints + 4);
		set_line(board, right_constraint, left_constraint, line);
		constraints++;
	}
}
