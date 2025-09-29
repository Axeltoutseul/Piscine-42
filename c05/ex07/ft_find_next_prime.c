/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 09:38:05 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/14 09:38:08 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	search_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	else if (nb % 2 == 0 || nb <= 1)
		return (0);
	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (search_prime(nb) == 0)
		nb++;
	return (nb);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_find_next_prime(-2147483648));
	return (0);
}*/
