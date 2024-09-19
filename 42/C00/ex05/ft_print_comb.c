/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:14:25 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/08 15:30:31 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	dig[4];

	dig[0] = 48;
	dig[3] = '\0';
	while (dig[0] <= 55)
	{
		dig[1] = dig[0] + 1;
		while (dig[1] <= 56)
		{
			dig[2] = dig[1] + 1;
			while (dig[2] <= 57)
			{
				write(1, &dig[0], 1);
				write(1, &dig[1], 1);
				write(1, &dig[2], 1);
				if (dig[0] != 55)
					write(1, ",  ", 2);
				dig[2]++;
			}
			dig[1]++;
		}
		dig[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

