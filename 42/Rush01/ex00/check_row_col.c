/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:42:54 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/15 21:45:30 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int **mat, int *up, int col)
{
	int	i;
	int	max;
	int	count;

	i = 1;
	count = 1;
	max = mat[0][col];
	while (i < 4)
	{
		if (mat[i][col] > max)
		{
			max = mat[i][col];
			++count;
		}
		++i;
	}
	if (count <= up[col])
		return (1);
	return (0);
}

int	col_down(int **mat, int *down, int col)
{
	int	i;
	int	max;
	int	count;

	i = 2;
	count = 1;
	max = mat[3][col];
	while (i >= 0)
	{
		if (mat[i][col] > max)
		{
			max = mat[i][col];
			++count;
		}
		--i;
	}
	if (count == down[col])
		return (1);
	return (0);
}

int	row_left(int **mat, int *left, int row)
{
	int	j;
	int	max;
	int	count;

	j = 1;
	count = 1;
	max = mat[row][0];
	while (j < 4)
	{
		if (mat[row][j] > max)
		{
			max = mat[row][j];
			++count;
		}
		++j;
	}
	if (count <= left[row])
		return (1);
	return (0);
}

int	row_right(int **mat, int *right, int row)
{
	int	j;
	int	max;
	int	count;

	j = 2;
	count = 1;
	max = mat[row][3];
	while (j >= 0)
	{
		if (mat[row][j] > max)
		{
			max = mat[row][j];
			++count;
		}
		--j;
	}
	if (count == right[row])
		return (1);
	return (0);
}
