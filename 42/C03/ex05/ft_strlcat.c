/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 22:35:11 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/16 19:30:36 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len])
		++dest_len;
	while (src[src_len])
		++src_len;
	if (dest_len >= size)
		return (src_len + size);
	while (src[i] && (dest_len + i < size - 1))
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char X[15] = "Welcome";
	char Y[15] = "Welcome";

	printf("my code :   %d\n", ft_strlcat(X, " to 42 :)", 15));
	printf("original :  %lu\n", strlcat(Y, " to 42 :)",15));
	printf("my code : %s\n", X);
	printf("original :%s\n", Y);
	return (0);
}
*/
