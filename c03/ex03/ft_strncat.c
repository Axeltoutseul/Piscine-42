/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:21:52 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/05 13:39:27 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i] && i < n)
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[30] = "Premiere chaine de caracteres ";
	char	str2[30] = "Deuxieme chaine de caracteres ";

	printf("%s", ft_strncat(str1, str2, 8));
	return (0);
}*/
