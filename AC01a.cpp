#include <stdio.h>

int main(){
    int a = 5;
    int b = 6;
    int c;
    int *p;
    int *q;
    p = &a;
    q = &b;
    c = *p + *q;
    printf(" c = %d\n", c);
    return 0;
}