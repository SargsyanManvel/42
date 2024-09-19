/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:40:33 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/16 18:22:30 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		++i;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	printf ("1   > %d\n", ft_strncmp("Manvel", "Manvel", 4));
	printf ("2   > %d\n", ft_strncmp("Manvel", "Manvel ", 7));
	printf ("3   > %d\n", ft_strncmp("Manvel", "MaRvel", 3));	
	return (0);
}
*/
