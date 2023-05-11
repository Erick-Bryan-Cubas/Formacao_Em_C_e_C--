#include <stdio.h>

int main(){
    int i, num;
    float sum = 0, avg;

    printf("Digite 10 valores: \n");

    for (i = 0; i < 10; i++){
        scanf("%d", &num);
        sum += num;
    }
    avg = sum / 10;

    printf("A média dos valores é: %.2f\n", avg);

    return 0;
}