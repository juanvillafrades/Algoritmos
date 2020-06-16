#include<stdio.h>
 
 long result;
 int n;
 long factorial(int n){
     if (n == 0){
        return 1;
     }
     else{
        return(n*factorial(n-1));
     }
 }

main(int argc, char const *argv[]){
    printf("Introduce el numero:\n");
    scanf("%d", &n);
    if (n < 0){
        printf("Introduce un numero natural\n");
    }
    else{
        result = factorial(n);
        printf("El factorial de %d es: %li\n", n, result);
    }    
    return 0;
}
