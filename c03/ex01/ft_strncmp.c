/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:57:52 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/03 11:57:54 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	chaine1[22] = "Bonsoir ";
	char	chaine2[22] = "Bonsoir tout le monde";

	printf("%d\n", ft_strncmp(chaine1, chaine2, 10));
	printf("%d\n", strncmp(chaine1, chaine2, 10));
	return (0);
}*/
