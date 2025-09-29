/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 09:20:04 by axbaudri          #+#    #+#             */
/*   Updated: 2023/08/03 09:20:06 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char str[35] = "VoicI uNe ChAiNe dE cArAcTerEs";

	printf("%s", ft_strlowcase(str));
	return (0);
}*/
