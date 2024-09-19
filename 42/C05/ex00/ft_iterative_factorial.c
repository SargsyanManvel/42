/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:18:15 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/19 17:41:18 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factor;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	factor = 1;
	while (nb != 1)
	{
		factor *= nb;
		--nb;
	}
	return (factor);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d   : ",ft_iterative_factorial(1)); 
	return (0);
}
*/
