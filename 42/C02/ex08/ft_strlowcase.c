/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:40:02 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/09 22:50:31 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
			*(str + i) += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char X[] = "HFTFuudgLH";
	char Y[] = "HGTF%&GY*@l";

	printf("1 >   %s\n", ft_strlowcase(X));
	printf("2  >   %s\n", ft_strlowcase(Y));
	return (0);
}
*/
