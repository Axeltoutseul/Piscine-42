/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:09:09 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/03 14:09:12 by axbaudri         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == ft_strlen(to_find))
				return (str + i);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{

	printf("%s\n", ft_strstr("ABCD ABD ABCDE ABDE ABC ABCE", "BCDE"));
	printf("%s\n", strstr("ABCD ABD ABCDE ABDE ABC ABCE", "BCDE"));
	return (0);
}*/
