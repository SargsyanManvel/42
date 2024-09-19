/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:47:51 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/08 12:09:10 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}
/*
int	main(void)
{
	int	*c;
	int	*d;
	int	m;
	int	n;


	m = 7;
	n = 2;
	c = &m;
	d = &n;
	ft_ultimate_div_mod(c, d);
	printf("c = %d,d = %d ", *c, *d);
	return (0);
}
*/
