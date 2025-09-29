/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 20:12:35 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/01 20:12:37 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	valeur;

	valeur = *a;
	*a = valeur / *b;
	*b = valeur % *b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 112;
	int	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d", a, b);
	return (0);
}*/
