/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:02:17 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/19 19:14:07 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*merge;

	merge = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (merge);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char X[15] = "Hello ";
	char Z[15] = "Hello ";
	char Y[] = "word!";

	printf("merge   :  %s\n", ft_strcat(X, Y));
	printf("original : %s\n", strcat(Z, Y));
	return (0);
}

