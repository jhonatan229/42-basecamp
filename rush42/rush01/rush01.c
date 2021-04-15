/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibraz-da <ibraz-da@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 17:29:03 by ibraz-da          #+#    #+#             */
/*   Updated: 2021/04/12 00:48:21 by ibraz-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	write_message(char *str);
void	ft_putchar(char c);

int		count_chars_in_board(char board[G_LINE][G_COL], char ch)
{
	int quantity;
	int line;
	int col;

	quantity = 0;
	line = -1;
	while (++line < G_LINE)
	{
		col = -1;
		while (++col < G_COL)
		{
			if (board[line][col] == ch)
				quantity++;
		}
	}
	return (quantity);
}

void	set_fourth_char(char board[G_LINE][G_COL], char set_char)
{
	int		line;
	int		col;
	int		total_lines;
	int		total_cols;

	while (++set_char <= '4')
	{
		total_lines = 0;
		total_cols = 0;
		if (count_chars_in_board(board, set_char) != 3)
			continue;
		line = -1;
		while (++line < G_LINE)
		{
			col = -1;
			while (++col < G_COL)
			{
				if (board[line][col] != set_char)
					continue;
				total_lines += line;
				total_cols += col;
			}
		}
		board[6 - total_lines][6 - total_cols] = set_char;
	}
}

void	check_lines(char board[G_LINE][G_COL])
{
	int line_counter;
	int col_counter;
	int quantity;
	int ch;
	int save;

	line_counter = -1;
	while (++line_counter < G_LINE)
	{
		col_counter = -1;
		quantity = 0;
		ch = 0;
		while (++col_counter < G_COL)
		{
			ch = ch + board[line_counter][col_counter] - '0';
			if (board[line_counter][col_counter] == '0')
			{
				quantity++;
				save = col_counter;
			}
		}
		if (quantity == 1)
			board[line_counter][save] = (10 - ch) + '0';
	}
}

void	check_col(char board[G_LINE][G_COL])
{
	int col_counter;
	int line_counter;
	int check;
	int ch;
	int save;

	col_counter = -1;
	while (++col_counter < G_COL)
	{
		line_counter = -1;
		check = 0;
		ch = 0;
		while (++line_counter < G_LINE)
		{
			ch = ch + board[line_counter][col_counter] - '0';
			if (board[line_counter][col_counter] == '0')
			{
				check++;
				save = line_counter;
			}
		}
		if (check == 1)
			board[save][col_counter] = (10 - ch) + '0';
	}
}

void	rush(char *constraints)
{
	int		i;
	int		j;
	char	board[4][4];

	i = -1;
	while (++i < G_LINE)
	{
		j = -1;
		while (++j < G_COL)
			board[i][j] = '0';
	}
	guess_columns(board, constraints);
	constraints += 4;
	guess_lines(board, constraints);
	constraints -= 4;
	i = -1;
	while (++i < 16)
	{
		set_fourth_char(board, '0');
		check_lines(board);
		check_col(board);
	}
	print_board(board);
}
