/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 17:16:46 by axbaudri          #+#    #+#             */
/*   Updated: 2025/08/01 17:16:47 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;
	int	size;

	i = 0;
	if (min >= max)
		return (-1);
	size = max - min;
	tab = (int *)malloc(sizeof(int) * size);
	if (!range)
		return (-1);
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (size);
}

/*int	main(void)
{
	int	*range;

	range = NULL;
	ft_ultimate_range(&range, 1, 11);
	printf("%d\n", range[9]);
	return (0);
}*/
