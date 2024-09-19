/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 16:37:18 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/12 21:15:21 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (0 - *s2);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("1   > %d\n", ft_strcmp("Manvel", "Manvel"));
	printf ("2   > %d\n", ft_strcmp("Manvel", "Manvel "));
	printf ("3   > %d\n", ft_strcmp("Manvel", "MaRvel"));
	return (0);
}
*/
