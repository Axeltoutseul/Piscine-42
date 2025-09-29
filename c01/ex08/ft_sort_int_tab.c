/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:51:29 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/02 10:51:34 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	c;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			c = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = c;
			i = 0;
		}
		else
			i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	tab[5] = {5, 3, 8, 7, 2};
	int	taille = sizeof(tab) / sizeof(tab[0]);

	ft_sort_int_tab(tab, taille);
	while (i < taille)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}*/
