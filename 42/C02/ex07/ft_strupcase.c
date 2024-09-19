/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:00:57 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/09 22:35:57 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char X[] = "hfushs";
	char Y[] = "hshdgHTFRFio_";

	printf("1 >   %s\n", ft_strupcase(X));
	printf("2  >   %s\n", ft_strupcase(Y));
	return (0);
}
*/
