/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:19:34 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/23 21:48:37 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		*(*range + i++) = min;
		++min;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr = NULL;;
	int k = 0;
	printf("%d\n\n", ft_ultimate_range(&arr, 5, 60));

	if (arr == NULL)
	{
		printf("%s\n", "ERROR");
		return (1);
	}
	for (int i = 5; i < 60; ++i)
	{
	   printf("%d\t", *(arr + k));
	   ++k;
	}
	return (0);
}
*/
