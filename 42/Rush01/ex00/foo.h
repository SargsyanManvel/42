/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foo.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:54:57 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/15 21:32:40 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FOO_H
# define FOO_H

# define N 4

struct	s_game
{
	int	left[N];
	int	right[N];
	int	up[N];
	int	down[N];
	int	grid[N][N];
};

int		row_left(int **mat, int *left, int row);
int		row_right(int **mat, int *right, int row);
int		col_up(int **mat, int *up, int col);
int		col_down(int **mat, int *down, int col);
int		valid(int count, char *str);
int		check_str(char *str);
int		atoi(char str);
void	print_str(char *str);
void	ft_putchar(char c);
void	fill(struct s_game *X, char *str);
void	fill_up(struct s_game *X, char *str);
void	fill_down(struct s_game *X, char *str);
void	fill_left(struct s_game *X, char *str);
void	fill_right(struct s_game *X, char *str);
#endif
