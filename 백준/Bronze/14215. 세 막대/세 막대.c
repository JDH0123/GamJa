#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b) 
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (b > c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }

    if (a+b<=c)
    {
        c = a+b-1;
    }

    printf("%d", a+b+c);
}