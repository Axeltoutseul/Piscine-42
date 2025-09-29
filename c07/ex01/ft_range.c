/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 16:58:42 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/12 16:58:44 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	nb;
	int	taille;
	int	*tab;

	nb = min;
	i = 0;
	taille = max - min;
	tab = (int *)malloc(sizeof(int) * taille);
	if (min >= max)
		return (0);
	while (i < taille)
	{
		tab[i] = nb;
		i++;
		nb++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	int	i = 0;
	int	min = 1;
	int	max = 51;
	int	*nombres = ft_range(min, max);
	int	taille = max - min;

	while (i < taille)
	{
		printf("%d\n", nombres[i]);
		i++;
	}
	free(nombres);
	return (0);
}*/
