#include <stdio.h>

int main(void){
int    a, b;
double x;

    printf("Digite o primeiro numero ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero ");
    scanf("%d", &b);
    
    x = (a + b) / 2.0;
    printf("A media eh %f\n", x);

    return 0;
}