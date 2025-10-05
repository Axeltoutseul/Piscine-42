void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_strlen(char *str);
void    ft_swap(int *a, int *b);
int     ft_strcmp(char *s1, char *s2);

int main(void)
{
    int x = 2;
    int y = 3;

    ft_swap(&x, &y);
    ft_putchar('0' + x);
    ft_putstr(", ");
    ft_putchar('0' + y);
    return (0);
}
