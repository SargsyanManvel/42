/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:48:58 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/19 18:32:17 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		++i;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d   : " ,ft_is_prime(181));
	return (0);
}
*/
