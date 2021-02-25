#include <stdio.h>

int policz(int a, int b){
    return (a+b)*(a-b);
}
int main() {
    //a
    printf("W branchu 02 (2+3)*(3-2) = %d", policz(3, 2));
    return 0;
}
