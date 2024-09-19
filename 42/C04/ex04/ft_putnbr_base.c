/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 21:02:26 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/18 20:00:39 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_dec(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	print_rec(long num, int len, char *base)
{
	int	k;

	if (num != 0)
	{
		k = num % len;
		num /= len;
		print_rec(num, len, base);
		ft_putchar(base[k]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basis;

	if (!check(base))
	{
		write(1, "error", 5);
		return ;
	}
	basis = base_dec(base);
	if (nbr == -2147483648)
	{
		write(1, "-", 1);
		print_rec((long)nbr * (-1), basis, base);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	print_rec(nbr, basis, base);
}
/*
int	main(void)
{
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
	return (0);
}
*/
