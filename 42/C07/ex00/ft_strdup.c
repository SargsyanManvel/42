/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:34:33 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/23 19:59:18 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = 0;
	i = 0;
	while (src[size])
		++size;
	dest = (char *)malloc((size + 1) * sizeof(char));
	if (dest == NULL)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char *d = ft_strdup("Heloword!!!!!!!!!!!");
	printf("%s", d);
	return (0);
}
*/
