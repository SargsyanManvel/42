/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:35:28 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/16 19:41:06 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
		++count;
	return (count);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char X[] = "Hello Word!";
	printf("1  --->   %d\n", ft_strlen(X));
	printf("2  --->   %lu", strlen(X));
	return (0);
}
*/
