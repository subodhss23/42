#include <unistd.h>

int     ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i] <= '0' && str[i] >= '9' )
    {
        res = res * 10 +(int)str[i] - 48;
        ++i;
    }
    return (sign * res);
}
