/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:03:45 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/13 03:56:46 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (*(src + src_len) != '\0')
		++src_len;
	if (size == 0)
		return (src_len);
	while (i < size - 1 && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	char Y[7];
	char X[7];
	char Z[7] = "Hello6";

	printf("size = %d\n", ft_strlcpy(Y, Z, 5));
	printf("  = %s\n", Y);
	printf("original strlcpy %lu\n", strlcpy(X, Z, 5));
	printf("  = %s\n", X);
	return (0);
}
*/
