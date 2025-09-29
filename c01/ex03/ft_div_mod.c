/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:01:00 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/01 20:01:08 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 112;
	int	b = 57;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d", div, mod);
	return (0);
}*/
