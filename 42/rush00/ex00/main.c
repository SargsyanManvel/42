/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbarkhud <rbarkhud@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:45:42 by rbarkhud          #+#    #+#             */
/*   Updated: 2024/09/07 20:10:43 by rbarkhud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int cols, int rows);

int	main(void)
{
	int	i;
	int	j;

	i = 5;
	j = 3;
	rush(i, j);
	i = 5;
	j = 1;
	rush(i, j);
	i = 1;
	j = 1;
	rush(i, j);
	i = 1;
	j = 5;
	rush(i, j);
	i = 4;
	j = 4;
	rush(i, j);
	return (0);
}
