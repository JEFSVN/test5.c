#include <stdio.h>

int main(){

int numero;

    printf("digite um numero ");
    scanf("%d", &numero);

if (numero > 0){4
    
 if (numero % 2 == 0){
    printf("numero e par");
 } else{
    printf("numero impar");
 }
}
else if (numero == 0){
    printf("numero e zero");
} else{
    printf("numero e negativo");
}




return 0;
}