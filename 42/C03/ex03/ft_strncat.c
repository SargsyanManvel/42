/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:47:25 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/16 19:16:28 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	unsigned int	i;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (j < nb && src[j])
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char X[15] = "Hello ";
	char Z[15] = "Hello ";
	char Y[] = "word!";

	printf("merge   :  %s\n", ft_strncat(X, Y, 4));
	printf("original : %s\n", strncat(Z, Y, 4));
	return (0);
}
*/
