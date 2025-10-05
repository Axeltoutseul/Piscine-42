#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_count_if(char **tab, int(*f)(char *))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (tab[i])
    {
        if (f(tab[i]) != 0)
            count++;
        i++;
    }
    return (count);
}

/*int main(void)
{
    char *strs[4] = {"PCF", "", "EELV", 0};
    printf("%d\n", ft_count_if(strs, &ft_strlen));
    return (0);
}*/
