// Algorit,o de ordenamiento Buble sort
#include<stdio.h>

void ChangePos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void BubleSort(int InVector[], int n){
    int i, j;
    for(i =; i < n-1; i++){
        for(j=0; j < n-i-1; j++){
            if(InVector[j] > InVector[j+1])
                ChangePos(&InVector[j],&InVector[j+1]);
        }
    }
}

int print(InVector[j], int n){
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ,", InVector[i]);
        printf("/n fin del ordenamiento")
    }
    
}

int main(int argc, char const *argv[])
{
    int InVector[]= {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(InVector)/sizeof(InVector[0]);
    BubleSort(InVector, n);
    print(InVector, n);
    printf("/n");
    return 0;
}
