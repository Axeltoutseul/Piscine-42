#include <stdio.h>

int compare_numbers(int a, int b)
{
    if (a < b)
        return (-1);
    if (a == b)
        return (0);
    return (1);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i;

    i = 0;
    if (!length)
        return (0);
    if (length == 1)
        return (1);
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
            return (0);
        i++;
    }
    return (1);
}

/*int main(void)
{
    int tab[4] = {2, 4, 4, 8};
    int size = sizeof(tab) / sizeof(int);
    printf("%d\n", ft_is_sort(tab, size, &compare_numbers));
    return (0);
}*/
