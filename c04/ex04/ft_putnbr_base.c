#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			neg *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	result;

	size = ft_strlen(base);
	result = (unsigned int)nbr;
	if (result >= size)
	{
		ft_putnbr_base(result / size, base);
		ft_putchar(base[result % size]);
	}
	else
		ft_putchar(base[result]);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	else
		ft_putnbr_base(ft_atoi(argv[1]), "0123456789ABCDEF");
	return (0);
}
