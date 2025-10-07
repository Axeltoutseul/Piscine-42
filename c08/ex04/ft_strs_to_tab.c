/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:52:12 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:00:34 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

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
}

/*int	main()
{
	const int	SIZE = 5;
	char	*str_array[6] = {"Salut", "Bonjour", "Douglas", "Test",
								"Comment allez-vous ? Moi ca va."};
	t_stock_str *struct_array = ft_strs_to_tab(SIZE, str_array);
	for (int i = 0; i < SIZE; i++){
		printf("struct_array[%d] :\n", i);
		printf("   size : %d\n   str  : %s\n   copy : %s\n\n",
		struct_array[i].size, struct_array[i].str, struct_array[i].copy);
	}
}*/

/*int	main(int argc, char **argv)
{
	t_stock_str	*string_array;
	int			i = 0;

	if (argc < 2)
		printf("\n");
	else
	{
		string_array = ft_strs_to_tab(argc, argv);
		while (i < argc)
			printf("%s\n", string_array[i++].str);
	}
	return (0);
}*/
