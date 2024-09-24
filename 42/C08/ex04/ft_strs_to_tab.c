/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:27:48 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/24 23:14:31 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	j;

	j = -1;
	while (src[++j])
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	free_arr(t_stock_str *arr, int count)
{
	int	i;

	i = -1;
	while (++i < count)
	{
		free((arr + i)->str);
		free((arr + i)->copy);
	}
	free(arr);
}


int	fill(t_stock_str *arr, int ac, char **av)
{
	int	i;

	i = -1;
	while (++i < ac)
	{
		(arr + i)->size = ft_strlen(av[i]);
		(arr + i)->str = (char *)malloc(((arr + i)->size + 1) * sizeof(char));
		(arr + i)->copy = (char *)malloc(((arr + i)->size + 1) * sizeof(char));
		if (!(arr + i)->str || !(arr + i)->copy)
		{
			free_arr(arr, i);
			return (0);
		}
		ft_strcpy((arr + i)->str, av[i]);
		ft_strcpy((arr + i)->copy, (arr + i)->str);
	}
	(arr + i)->size = 0;
	(arr + i)->str = NULL;
	(arr + i)->copy = NULL;
	return (1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;

	if (ac == 0)
		return (NULL);
	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (arr == NULL)
		return (arr);
	if (!fill(arr, ac, av));
		return (1);
	return (arr);
}
/*
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(1, str + i, 1);
}

void	ft_putnbr(int n)
{
	char	mod;

	mod = (n % 10) + '0';
	if (n / 10 != 0)
		ft_putnbr(n / 10);
	write(1, &mod, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while ((par + ++i)->str != 0)
	{
		ft_putstr((par + i)->str);
		write (1, "\n", 1);
		ft_putnbr((par + i)->size);
		write(1, "\n", 1);
		ft_putstr((par + i)->copy);
		write(1, "\n", 1);
	}
}


#include <stdio.h>

int	main(void)
{
	char* X[10] = {"eleven","Twelve","Thirdteen",
	"Fourteen", "Fifteen", "Manvel", "Sargsyan"};
	t_stock_str *k = ft_strs_to_tab(7,X);
	ft_show_tab(k);
		//free((k + i)->str);
		//free((k + i)->copy);
	free(k);
	return (0);
}
*/
