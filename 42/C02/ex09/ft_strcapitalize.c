/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:43:44 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/13 03:53:50 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*lower_case(char *str)
{
	char	*low;

	low = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
	return (low);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = lower_case(str);
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= '0' && *(str + i) <= '9'))
		{
			if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
			{
				if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
					if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
						*(str + i + 1) -= 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char X[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *s =  ft_strcapitalize(X); 
	printf("%s\n", s);
	return (0);
}
*/
