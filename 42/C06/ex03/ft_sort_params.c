/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:09:40 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/20 22:51:38 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		++i;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			break ;
		++i;
	}
	return (str1[i] - str2[i]);
}

void	sort(char **str, int size)
{
	int		i;
	int		j;
	char	*min;
	int		indx;

	i = 0;
	min = NULL;
	while (i < size - 1)
	{
		j = i + 1;
		indx = i;
		min = *(str + i);
		while (j < size)
		{
			if (ft_strcmp(str[j], min) < 0)
			{
				min = *(str + j);
				indx = j;
			}
			++j;
		}
		str[indx] = str[i];
		str[i] = min;
		++i;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort(&argv[1], argc - 1);
	while (i < argc)
	{
		ft_putstr(*(argv + i));
		write (1, "\n", 1);
		++i;
	}
	return (0);
}
