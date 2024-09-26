/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 22:03:11 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/25 21:38:29 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
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

	if (par == NULL)
		return ;
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
