#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int size;

    i = 0;
    size = ft_strlen(dest);
    while (src[i])
        dest[size++] = src[i++];
    dest[size] = 0;
    return (dest);
}

int calculate_total_size(char **strs, int size, const char *sep)
{
    int i;
    int total_size;

    i = 0;
    total_size = 0;
    while (i < size)
    {
        total_size += ft_strlen(strs[i]);
        if (i < size - 1)
            total_size += ft_strlen(sep);
        i++;
    }
    return (total_size);
}

char    *ft_strjoin_python(char **strs, int size, char *sep)
{
    int     i;
    int     total_size;
    char    *new_string;

    i = 0;
    total_size = calculate_total_size(strs, size, sep);
    new_string = (char *)malloc(sizeof(char) * (total_size + 1));
    if (!new_string)
        return (NULL);
    while (i < size)
    {
        ft_strcat(new_string, strs[i]);
        if (i < size - 1)
            ft_strcat(new_string, sep);
        i++;
    }
    new_string[total_size] = 0;
    return (new_string);
}
