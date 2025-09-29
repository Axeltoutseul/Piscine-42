/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:37:03 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/01 15:37:17 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	lettre;

	lettre = 'a';
	while (lettre <= 'z')
	{
		ft_putchar(lettre);
		lettre++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
