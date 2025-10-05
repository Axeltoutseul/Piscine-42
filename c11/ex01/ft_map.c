#include <stdio.h>
#include <stdlib.h>

int square_value(int nb)
{
    return (nb * nb);
}

int *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *numbers;

    i = 0;
    numbers = (int *)malloc(sizeof(int) * length);
    if (!numbers)
        return (NULL);
    while (i < length)
    {
        numbers[i] = f(tab[i]);
        i++;
    }
    return (numbers);
}

/*int main(void)
{
    int i = 0;
    int tab[4] = {2, 4, 6, 8};
    int length = sizeof(tab) / sizeof(int);
    int *numbers = ft_map(tab, length, &square_value);

    while (i < length)
        printf("%d\n", numbers[i++]);
    return (0);
}*/
