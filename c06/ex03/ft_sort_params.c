/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:51:17 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/09 11:51:19 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char **param, int size)
{
	int		i;
	char	*c;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(param[i], param[i + 1]) > 0 && i > 0)
		{
			c = param[i];
			param[i] = param[i + 1];
			param[i + 1] = c;
			i = 0;
		}
		else
			i++;
	}
	i = 0;
	while (i < size - 1)
	{
		i++;
		ft_putstr(param[i]);
		write(1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	ft_sort_params(argv, argc);
	return (0);
}
