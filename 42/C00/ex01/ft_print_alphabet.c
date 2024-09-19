/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:31:48 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/05 17:48:37 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 122)
	{
		write(1, &c, 1);
		c++;
	}
}
