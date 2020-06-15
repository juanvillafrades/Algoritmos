// Algorit,o de ordenamiento Buble sort
#include<stdio.h>

void ChangePos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void BubleSort(int InVector[], n){
    int i, j;
    for(i =; i < n-1; i++){
        for(j=0; j < n-i-1; j++){
            if(InVector[j] > InVector[j+1])
                ChangePos(&InVector[j],&InVector[j+1]);
        }
    }
}