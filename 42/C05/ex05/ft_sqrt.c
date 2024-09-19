/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:21:52 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/19 17:40:16 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d   : " ,ft_sqrt(625));
	return (0);
}
*/
