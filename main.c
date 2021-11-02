#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 20;
    printf (" x = %d, y = %d before calling the function", x, y);
    CallRef(&x, &y);
    printf( "\n x = %d, y = %d after calling the function", x, y);
    }
    int CallRef( int *a, int *b)
    {
    *a = *a + 5;
    *b = *b + 5;
    printf (" \nx = %d, y = %d from modular function", *a, *b);
    return 0;
}
