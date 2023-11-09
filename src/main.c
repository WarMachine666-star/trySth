#include "stdio.h"
#include "math/my_math.h"

int main ()
{
    printf("This is a project built using cmake\n");

    int rtn = add_num(3, 4);
    printf("math.c function returns: %d, math.h macro returns: %d\n", rtn, add(1, 2));
    return 0;
}