#include <stdio.h>
int main(){
    int i = 1;
    int numero, resultado1 = 0, resultado2 = 0;
    
    
    while (i!=0){
        scanf("%d", &numero);
        if (numero <= 5242880 && numero % 2 == 0){
            resultado1 += numero;
        } else if (numero <= 5242880 && numero % 2 != 0){
            resultado2 +=numero;
        }
        if (numero==0){
            i=0;
        }
    }
    printf("%d %d\n", resultado1, resultado2);
    
    return 0;
}