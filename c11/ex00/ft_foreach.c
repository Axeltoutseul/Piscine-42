/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:19:28 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:19:29 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	triple(int nb)
{
	printf("%d\n", nb * 3);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int length = sizeof(tab) / sizeof(int);
	ft_foreach(tab, length, &triple);
	return (0);
}*/
