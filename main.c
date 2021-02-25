#include <stdio.h>

int policz(int a, int b)
{
    return (a + b);
}
int main() {
    printf("W pierwszym branchu 2 + 3 = %d", policz(2, 3));
    return 0;
}