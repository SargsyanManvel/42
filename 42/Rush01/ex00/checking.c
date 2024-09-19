/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mansargs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:18:11 by mansargs          #+#    #+#             */
/*   Updated: 2024/09/15 21:18:57 by mansargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	print_str(char *str);

int	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (str[i] <= '0' || str[i] >= '5')
				return (0);
		}
		else if (str[i] != ' ')
			return (0);
		++i;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	atoi(char str)
{
	return (str - '0');
}

int	valid(int count, char *str)
{
	if (count != 2 || check_str(str) == 0)
	{
		print_str("Error\n");
		return (0);
	}
	return (1);
}
