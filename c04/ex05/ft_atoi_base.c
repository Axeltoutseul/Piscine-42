/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:05:40 by axbaudri          #+#    #+#             */
/*   Updated: 2024/06/24 15:50:42 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_in_base(char c, char *base)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (base[i])
	{
		if (base[i] == c)
			result = 1;
		i++;
	}
	return (result);
}

int	is_error(char *base)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			result = 1;
		i++;
	}
	return (result);
}

int	duplicate(char *base)
{
	int	i;
	int	j;
	int	doublon;

	j = 1;
	doublon = 0;
	while (base[j])
	{
		i = 0;
		while (i < j)
		{
			if (base[i] == base[j])
				doublon = 1;
			i++;
		}
		j++;
	}
	return (doublon);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	size;
	int	position;

	i = 0;
	nb = 0;
	size = ft_strlen(base);
	if (duplicate(base) || is_error(base) || size < 2)
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (is_in_base(str[i], base))
	{
		position = 0;
		while (base[position] != str[i])
			position++;
		nb = nb * size + position;
		i++;
	}
	return (nb);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		printf("%d", ft_atoi_base(argv[1], "01"));
	return (0);
}*/
