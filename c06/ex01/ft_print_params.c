/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 09:26:02 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/09 09:26:04 by axbaudri         ###   ########.fr       */
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

void	ft_print_params(char **param, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		ft_putstr(param[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_print_params(argv, argc);
	return (0);
}
