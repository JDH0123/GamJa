#include <stdio.h>

int main(void)
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int xmin, ymin;
    if (x < w-x) xmin = x;
    else xmin = w-x;
    if (y < h-y) ymin = y;
    else ymin = h-y;

    if (xmin < ymin) printf("%d", xmin);
    else printf("%d", ymin);
}