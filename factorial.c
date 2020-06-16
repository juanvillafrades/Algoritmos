#include<stdio.h>

int fact(int n){
    int past =1;
    if(n==0){
        printf("El fatorial de %d es 1 ", n);
    }
    else{
        for (int i = n; i > 0 ; i--){
        past = past*i;
        }
        printf("El fatorial de %d es %d\n", n, past);
    }
}

int main(int argc, char const *argv[])
{
    fact(12);
    return 0;
}
