/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:30:26 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/02 10:30:29 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	char str[30] = "Voici une chaine de caracteres";
	printf("%d", ft_strlen(str));
	return (0);
}*/
