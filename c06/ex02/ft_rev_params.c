/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:20:38 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/09 11:20:40 by axbaudri         ###   ########.fr       */
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

void	ft_rev_params(char **param, int size)
{
	int	i;

	i = size - 1;
	while (i > 0)
	{
		ft_putstr(param[i]);
		write(1, "\n", 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argv, argc);
	return (0);
}
