/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:05:22 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/11 15:40:03 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("WelcometoYerevan  %d\n",ft_str_is_alpha("WelcometoYerevan"));
	printf("Welcome to 42\\$:) %d\n", ft_str_is_alpha("Welcome to 42\\$ :) "));
	return (0);
}
*/
