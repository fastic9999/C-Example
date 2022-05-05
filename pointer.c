#include <stdio.h>

void swap(int x, int y);

main()
{
    int x, y;
    x = 1, y =2;

    printf("x의 값운 %d, y의 값은 %d\n" , x, y);

    swap(x, y);
    printf("x의 값은 %d, y의 값은 %d\n", x, y);
}
void swap(int x, int y)
{
    int temp;
    temp = x;

    x = y;
    y = temp;
}
