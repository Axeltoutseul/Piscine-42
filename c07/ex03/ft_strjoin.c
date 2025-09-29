/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:27:52 by axbaudri          #+#    #+#             */
/*   Updated: 2025/09/29 11:44:55 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

int	calculate_total_size(int size, int total_size, char **strs, char *sep)
{
	int	i;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		if (i < size - 1)
			total_size += ft_strlen(sep);
		i++;
	}
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_size;
	char	*new_string;

	if (size == 0)
	{
		new_string = (char *)malloc(sizeof(char));
		new_string[0] = 0;
		return (new_string);
	}
	total_size = calculate_total_size(size, total_size, strs, sep);
	new_string = (char *)malloc(sizeof(char) * (total_size + 1));
	i = 0;
	while (i < size)
	{
		ft_strcat(new_string, strs[i]);
		if (i < size - 1)
			ft_strcat(new_string, sep);
		i++;
	}
	new_string[total_size] = '\0';
	return (new_string);
}

/*#include <stdio.h>

int	main(void)
{
	char	*strs[3];
	int	taille = sizeof(strs) / sizeof(strs[0]);

	strs[0] = "ft_strdup";
	strs[1] = "ft_range";
	strs[2] = "ft_ultimate_range";

	char	*new_string = ft_strjoin(taille, strs, " - ");
	printf("%s", new_string);
	free(new_string);
	return (0);
}*/
