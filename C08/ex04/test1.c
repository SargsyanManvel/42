
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct s_stock_str t_stock_str;



struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
};


struct s_stock_str* ft_init_stock(int ac)
{
	t_stock_str* obj;
   
	obj	= (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	
	if (obj == NULL)
		return (NULL);
	return (obj);
}

size_t ft_strlen(char *s) {
	char *str = s;

	while (str && *str)
		str++;
	return ((str - s));
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void ft_init_args(t_stock_str *obj, int ac, char **av) {
	size_t i;

	i = -1;
	while (++i < ac)
	{
		obj[i].size = ft_strlen(av[i]);
		obj[i].str = av[i];
		obj[i].copy = ft_strdup(av[i]);
	}
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str* obj;

	obj = ft_init_stock(ac);
	if (obj == NULL)
		return (NULL);

	ft_init_args(obj, ac, av);
	return(obj);
}


int main(int ac, char **av)
{
	t_stock_str* obj = ft_strs_to_tab(ac, av);

	for(int i = 0; i < ac; ++i) {
		printf("size: %d str: %s copy: %s\n", obj[i].size, obj[i].str, obj[i].copy);
	}
}
