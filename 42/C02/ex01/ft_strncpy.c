/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:53:45 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/13 00:25:22 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*orig_dest;
	unsigned int	i;

	i = 0;
	orig_dest = dest;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (orig_dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	char Y[7];
	char X[7];

	printf("ft_strncpy = %s\n", ft_strncpy(X, "Hel", 5));
	printf("strncpy = %s\n", strncpy(Y, "Hel", 5));
	return (0);
}
*/
