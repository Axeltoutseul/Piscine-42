/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axbaudri <axbaudri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:22:10 by axbaudri          #+#    #+#             */
/*   Updated: 2025/10/06 18:24:50 by axbaudri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swap(char **s1, char **s2)
{
	char	*c;

	c = *s1;
	*s1 = *s2;
	*s2 = c;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

/*int main(void)
{
	char *strs[11] = {"Cody Rhodes", "Gunther", "Roman Reigns",
				"Drew McIntyre", "Kevin Owens", "CM Punk", "LA Knight", 
				"Seth \"Freakin\" Rollins", "Randy Orton", "Damian Priest"};
	int i = 0;
	while (strs[i])
	{
		printf("%s", strs[i]);
		if (strs[i + 1])
			printf(", ");
		else
			printf("\n");
		i++;
	}
	ft_advanced_sort_string_tab(strs, &ft_strcmp);
	i = 0;
	while (strs[i])
	{
		printf("%s", strs[i]);
		if (strs[i + 1])
			printf(", ");
		else
			printf("\n");
		i++;
	}
	return (0);
}*/
