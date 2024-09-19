/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:32:50 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/09 20:57:54 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ' || *str > '~')
			return (0);
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("1 >   %d\n", ft_str_is_printable("isjifhji %8 _"));
	printf("2 > %d\n", ft_str_is_printable("©˙∫∆sihussu90-&"));
	printf("3 > %d\n", ft_str_is_printable(""));
	return (0);
}
*/
