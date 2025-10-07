/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:42:48 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:27:16 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(dest);
	while (src[i])
		dest[size++] = src[i++];
	dest[size] = 0;
	return (dest);
}

int	calculate_total_size(char **strs, int size, const char *sep)
{
	int	i;
	int	total_size;

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

char	*ft_strjoin(char **strs, int size, char *sep)
{
	int		i;
	int		total_size;
	char	*new_string;

	i = 0;
	total_size = calculate_total_size(strs, size, sep);
	new_string = (char *)malloc(sizeof(char) * (total_size + 1));
	if (!new_string)
		return (NULL);
	new_string[0] = 0;
	while (i < size)
	{
		ft_strcat(new_string, strs[i]);
		if (i < size - 1)
			ft_strcat(new_string, sep);
		i++;
	}
	new_string[total_size] = 0;
	return (new_string);
}

/*int main(void)
{
	char *strs[] = {"ft_strdup", "ft_range", "ft_ultimate_range"};
	int size = sizeof(strs) / sizeof(strs[0]);
	char *new_string = ft_strjoin(strs, size, " - ");
	printf("%s\n", new_string);
	free(new_string);
	return (0);
}*/
