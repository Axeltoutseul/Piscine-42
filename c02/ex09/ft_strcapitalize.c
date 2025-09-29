/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:24:44 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/03 09:24:56 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	minuscule(int a, char *string)
{
	if (!(string[a - 1] >= 48 && string[a - 1] <= 57))
	{
		if (!(string[a - 1] >= 65 && string[a - 1] <= 90))
		{
			if (!(string[a - 1] >= 97 && string[a - 1] <= 122))
			{
				string[a] -= 32;
				if (string[0] >= 97 && string[0] <= 122)
					string[0] -= 32;
			}
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			minuscule(i, str);
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i - 1] >= 48 && str[i - 1] <= 57)
				str[i] += 32;
			if (str[i - 1] >= 65 && str[i - 1] <= 90)
				str[i] += 32;
			if (str[i - 1] >= 97 && str[i - 1] <= 122)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	chaine[40] = "jE+sUIS uNE-cHAINE dE/2cARACTERES";
	printf("%s", ft_strcapitalize(chaine));
	return (0);
}*/
