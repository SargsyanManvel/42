/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:39:25 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/15 21:22:43 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "foo.h"

void	fill_up(struct s_game *X, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 6)
	{
		X->up[j++] = atoi(*(str + i));
		i += 2;
	}
}

void	fill_down(struct s_game *X, char *str)
{
	int	i;
	int	j;

	i = 8;
	j = 0;
	while (i <= 14)
	{
		X->down[j++] = atoi(*(str + i));
		i += 2;
	}
}

void	fill_left(struct s_game *X, char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 16;
	while (i <= 22)
	{
		X->left[j++] = atoi(*(str + i));
		i += 2;
	}
}

void	fill_right(struct s_game *X, char *str)
{
	int	i;
	int	j;

	i = 24;
	j = 0;
	while (i <= 30)
	{
		X->right[j++] = atoi(*(str + i));
		i += 2;
	}
}

void	fill(struct s_game *X, char *str)
{
	fill_up(X, str);
	fill_down(X, str);
	fill_left(X, str);
	fill_right(X, str);
}
