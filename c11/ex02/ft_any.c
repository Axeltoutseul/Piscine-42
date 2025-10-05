#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_any(char **tab, int(*f)(char*))
{
    int i;

    i = 0;
    while (tab[i])
    {
        if (f(tab[i]) != 0)
            return (1);
        i++;
    }
    return (0);
}

/*int main(void)
{
    char *strs[5] = {"", "", "", ""};
    printf("%d\n", ft_any(strs, &ft_strlen));
    return (0);
}*/
