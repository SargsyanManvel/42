/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:44:55 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/09 17:44:33 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("lowercase %d\n", ft_str_is_lowercase("lowercase"));
	printf("Lower_case %d\n", ft_str_is_lowercase("Lower_case"));
	return (0);
}
*/
