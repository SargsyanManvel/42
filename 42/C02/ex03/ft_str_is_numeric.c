/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:33:16 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/09 16:42:34 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("243892572   %d\n",ft_str_is_numeric("243892572"));
	printf("23264_353   %d\n", ft_str_is_numeric("23264_353"));
	return (0);
}
*/
