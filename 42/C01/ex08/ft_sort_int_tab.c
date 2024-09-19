/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:04:53 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/08 15:18:45 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min;
	int	indx;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = *(tab + i);
		indx = i;
		while (j < size)
		{
			if (*(tab + j) < min)
			{
				min = *(tab + j);
				indx = j;
			}
			j++;
		}
		*(tab + indx) = *(tab + i);
		*(tab + i) = min;
		i++;
	}
}
