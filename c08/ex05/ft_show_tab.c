/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:52:16 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:02:54 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	ft_putchar('\n');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*string_array;
	int			i;

	i = 0;
	string_array = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if (!string_array)
		return (NULL);
	while (i < ac)
	{
		string_array[i].size = ft_strlen(av[i]);
		string_array[i].str = ft_strdup(av[i]);
		string_array[i].copy = ft_strdup(av[i]);
		i++;
	}
	string_array[i].str = NULL;
	return (string_array);
}*/

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
		ft_putstr(par[i++].str);
}

/*int main(void)
{
	t_stock_str *string_array;
	char *strs[5] = {"PCF", "LFI", "EELV", "PS", 0};
	int size = 4;

	string_array = ft_strs_to_tab(size, strs);
	ft_show_tab(string_array);
	return (0);
}*/

/*int	main(int argc, char **argv)
{
	t_stock_str *string_array;

	if (argc < 2)
		ft_putchar('\n');
	else
	{
		string_array = ft_strs_to_tab(argc, argv);
		ft_show_tab(string_array);
	}
	return (0);
}*/
