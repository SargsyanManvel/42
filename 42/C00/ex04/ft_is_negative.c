/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:40:38 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/07 11:32:43 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>

void	ft_is_negative(int n);

int	main(void)
{
	int	num;

	printf("To enter integer number : ");
	scanf("%i", &num);
	ft_is_negative(num);
	return (0);
}
*/
void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n < 0)
		c = 'N';
	write(1, &c, 1);
}
