#include <stdio.h>

int main(void) {
    int x, y, *pt1, *pt2, **ptpt1, **ptpt2;

    x = 1;
    y = 4;

    printf("x=%d y=%d\n", x, y); // Imprime 1 e 4

    pt1 = &x; // pt1 aponta para x, que está com o valor 1
    pt2 = &y; // pt2 aponta para y, que está com o valor 4

    printf("*pt1=%d *pt2=%d\n", *pt1, *pt2); // Ainda imprime 1 e 4.

    ptpt1 = &pt1; // ptpt1 aponta para pt1, que está apontando para x, com o valor 1 
    ptpt2 = &pt2; // ptpt2 aponta para pt2, que está apontando para y, com o valor 4

    printf("**ptpt1=%d **ptpt2=%d\n", **ptpt1, **ptpt2); // Continua imprimindo 1 e 4.
return 0;
}