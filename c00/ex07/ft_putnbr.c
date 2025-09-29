/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:00:28 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/01 17:00:34 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0 && nb > -10)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putchar('0' + nb);
	}
	else if (nb <= -10)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else
		ft_putchar('0' + nb);
}

/*int	main(void)
{
	int nb = -2147483648;
	ft_putnbr(nb);
	return (0);
}*/
