/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:37:37 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/07 17:37:43 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (nb % i != 0)
			i++;
		if (nb / i < 2)
			return (1);
		else
			return (0);
	}
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_is_prime(73));
}*/
