/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:43 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/19 16:54:46 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	value = nb;
	while (power != 1)
	{
		value *= nb;
		--power;
	}
	return (value);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d   : " ,ft_iterative_power(-2,6));
	return (0);
}
*/
