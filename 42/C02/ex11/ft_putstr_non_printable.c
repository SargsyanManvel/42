/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:22:59 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/13 03:59:15 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		hex[2];
	char	c;

	while (*str != '\0')
	{
		if (!(*str < 32 || *str == 127))
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			hex[0] = *str / 16;
			hex[1] = *str % 16;
			c = hex[0] + '0';
			write(1, &c, 1);
			if (hex[1] > 9)
				c = hex[1] + 87;
			else
				c = hex[1] + '0';
			write(1, &c, 1);
		}
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
*/
