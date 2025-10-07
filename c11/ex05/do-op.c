/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:19:58 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:19:59 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else
		ft_putchar('0' + nb);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}

void	find_result(char **argv)
{
	int	a;
	int	b;
	int	nb;

	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_strcmp(argv[2], "+") == 0)
		nb = a + b;
	else if (ft_strcmp(argv[2], "-") == 0)
		nb = a - b;
	else if (ft_strcmp(argv[2], "*") == 0)
		nb = a * b;
	else if (ft_strcmp(argv[2], "/") == 0 && b != 0)
		nb = a / b;
	else if (ft_strcmp(argv[2], "%") == 0 && b != 0)
		nb = a % b;
	else
		nb = 0;
	if (ft_strcmp(argv[2], "/") == 0 && b == 0)
		write(1, "Stop : division by zero", 23);
	else if (ft_strcmp(argv[2], "%") == 0 && b == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(nb);
}
