/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:22:00 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:22:30 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	find_result(char **argv);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		ft_putchar(0);
	else
	{
		find_result(argv);
		ft_putchar('\n');
	}
	return (0);
}
