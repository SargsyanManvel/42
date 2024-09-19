/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:09:40 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/19 23:14:49 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		++i;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			break;
		++i;
	}
	return (str1[i] - str2[i]);
}

void	sort(char **str,int size)
{
	int		i;
	int		j;
	char	**temp;
	int		indx;

	i = 0;
	temp = NULL;
	while (i < size - 1)
	{
		j = i + 1;
		indx = i;
		while (j < size)
		{
			if (ft_strcmp(str[j],str[i]) > 0)
				indx = j;
			++j;
		}
		*temp = *str[i];
		str[i] = str[indx];
		**(str + indx) = **temp;
		++i;
	}
}


int	main(int argc,char *argv[])
{
	int	i;

	i = 1;
	sort(&argv[1],argc - 1);
	while (i < argc)
		ft_putstr(&argv[i]);
	return (0);
}
