#include "../ft.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}


int main(void)
{
    ft_putstr("Quoi");
    return (0);
}
