#include <stdio.h>

int main(){
    int a, b, *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = &b;
    a = 1;

    (*ptr1)++;
    b = a + *ptr1;
    *ptr2 = *ptr1 * *ptr2;

    printf("a=%d, b=%d, *ptr1=%d, *ptr2=%d\n, ptr1=%p, ptr2=%p, &ptr1=%p, &ptr2=%p", a, b, *ptr1, *ptr2, ptr1, ptr2, &ptr1, &ptr2);

return 0;
}