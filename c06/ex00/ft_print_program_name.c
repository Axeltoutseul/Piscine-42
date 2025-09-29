/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:26:08 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/08 19:26:10 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_program_name(char *program)
{
	int	i;

	i = 0;
	while (program[i] != '\0')
	{
		ft_putchar(program[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	argc = 0;
	ft_print_program_name(argv[argc]);
	return (0);
}
