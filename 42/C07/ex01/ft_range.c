/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:01:04 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/23 20:17:33 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	i = 0;
	range = (int *)malloc(size * sizeof(int));
	while (min < max)
	{
		*(range + i++) = min;
		++min;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int k = 0;
	int	*arr = ft_range(5, 21);
	if (arr == NULL)
	{
		printf("%s\n", "ERROR");
		return (1);
	}
	for (int i = 5; i < 21; ++i)
	{
	   printf("%d\t", *(arr + k));
	   ++k;
	}
	return (0);
}	
*/
