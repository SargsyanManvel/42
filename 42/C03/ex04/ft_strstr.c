/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 20:01:07 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/12 22:04:08 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*to_find == '\0')
		return (str);
	while (*(to_find + j) != '\0' && *(str + i) != '\0')
	{
		if (*(str + i) == *(to_find + j))
			j++;
		else
			j = 0;
		if (*(to_find + j) == '\0')
		{
			return (str + i - j + 1);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
char X[] = "Welcome to ialTutorialspoint";
	
	printf("my code : %s\n", ft_strstr(X, "ials"));
	printf("original :  %s\n", strstr(X, "ials"));
	return (0);
}
*/
