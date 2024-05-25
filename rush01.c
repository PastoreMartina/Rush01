#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

int *ft_atoi(char *str)
{
    unsigned int    i;
    unsigned int    j;
    int         *input;
    unsigned int    l;
    
    i = 0;
    j = 0;
    l = ft_strlen(str);

    input = (int *)malloc((l + 1) * sizeof(int));
    if (input == 0)
        return (0);
    while (str[i] != 0)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            input[j] = str[i] - 48;
            j++;
        }
        i++;        
    }
    input[j] = 0;
    return (input);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int *input = ft_atoi(argv[1]);
        unsigned int i = 0;
        
        
        while (*input)
        {
            printf("%d", input[i]);
            i++;
        }
        printf("\n");
        free(input);
    }
    return 0;
}
