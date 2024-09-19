/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:46:00 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/09 20:32:24 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("UPPERCASE %d\n", ft_str_is_uppercase("UPPERCASE"));
	printf("UPPeRC*SE %d\n", ft_str_is_uppercase("UPPeRC*se"));
	printf("    %d\n", ft_str_is_uppercase(""));
	return (0);
}
*/
