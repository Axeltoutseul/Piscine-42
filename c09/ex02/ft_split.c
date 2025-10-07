/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:11:46 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:11:47 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strndup(char *src, unsigned int n)
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * n + 1);
	if (!dest)
		return (NULL);
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!is_in_charset(str[0], charset))
	{
		i++;
		count++;
	}
	while (str[i])
	{
		if (is_in_charset(str[i], charset)
			&& (str[i + 1] && !is_in_charset(str[i + 1], charset)))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		size;
	char	**strs;

	i = 0;
	size = count_strings(str, charset);
	strs = (char **)malloc(sizeof(char *) * size + 1);
	if (!strs)
		return (NULL);
	while (i < size)
	{
		j = 0;
		while (is_in_charset(*str, charset))
			str++;
		while (!is_in_charset(str[j], charset))
			j++;
		strs[i] = ft_strndup(str, j);
		str += j;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

/*int	main(void)
{
	char *str = "Bonjour tout le monde";
	char **strs = ft_split(str, "o ");
	int i = 0;
	int size = count_strings(str, "o ");
	while (i < size)
		printf("%s\n", strs[i++]);
	return (0);
}*/
