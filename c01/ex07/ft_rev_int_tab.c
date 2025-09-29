/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:40:59 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/02 10:41:03 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		c = tab[i];
		tab[i] = tab[j];
		tab[j] = c;
		i++;
		j--;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i = 0;
	int	taille = sizeof(tab) / sizeof(tab[0]);
	ft_rev_int_tab(tab, taille);
	while (i < taille)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
