/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:50:31 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/24 20:44:22 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	len_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = -1;
	while (++i < size)
		len += ft_strlen(strs[i]);
	len += (size - 1) * ft_strlen(sep) + 1;
	return (len);
}

void	join(char *merge, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	v;

	i = -1;
	v = 0;
	while (++i < size)
	{
		j = -1;
		while (*(strs[i] + ++j))
			*(merge + v++) = *(strs[i] + j);
		j = -1;
		if (i != size - 1)
			while (*(sep + ++j))
				*(merge + v++) = *(sep + j);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*merge;

	if (size == 0)
	{
		merge = (char *)malloc(sizeof(char));
		*merge = '\0';
		return (merge);
	}
	i = len_malloc(size, strs, sep);
	merge = (char *)malloc(i * sizeof (char));
	join(merge, strs, sep, size);
	return (merge);
}


#include <stdio.h>

int	main()
{
char* X[8] = {"eleven", "twelve","thirteen",
"fourteen", "fifteen", "sixteen" , "seventeen" , "eighteen"};
	char Y[] = "ar ";
	printf("%s\n", ft_strjoin(10, X, Y));
	return (0);
}

