/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:55:40 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/17 20:59:32 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sig;

	i = 0;
	nbr = 0;
	sig = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -sig;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = 10 * nbr + (str[i] - '0');
		++i;
	}
	return (sig * nbr);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s   : \n", "      ---+--+1234ab567");
	printf("int   : %d", ft_atoi("  ---+--+ab567"));
	return (0);
}
*/
