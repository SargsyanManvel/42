/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:38:16 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/11 15:36:22 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig_dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	char Y[7];
	//char X[6] = "Hellortht";
   	
   	char *f = ft_strcpy(Y,"Hel"); 	
	printf("ft_strcpy = %s\n", f);
	printf("strcpy = %s\n", strcpy(Y, "Hel"));
	return (0);
}
*/
