/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:18:53 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/07 11:43:05 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int n)
{
	ft_putchar(n / 10 + '0');
	ft_putchar(n % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnum(a);
			write(1, " ", 1);
			ft_putnum(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
