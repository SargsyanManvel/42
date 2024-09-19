/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:27:55 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/07 11:33:00 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
void	ft_print_numbers(void)
{
	char	c;

	c = 48;
	while (c <= 57)
	{
		write(1, &c, 1);
		c++;
	}
}
