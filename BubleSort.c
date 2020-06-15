// Algorit,o de ordenamiento Buble sort
#include<stdio.h>

void ChangePos(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void BubleSort(int InVector[], int n){
    int i, j;
    for(i = 0; i < n-1; i++){
        for(j=0; j < n-1; j++){
            if(InVector[j] > InVector[j+1])
                ChangePos(&InVector[j],&InVector[j+1]);
        }
    }
}

int print_array(int InVector[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", InVector[i]);
    }
        printf("\n fin del ordenamiento");
    
}

int main(int argc, char const *argv[])
{
    int InVector[]= {2, 1, 0, 1011, -7, 0};
    int n = sizeof(InVector)/sizeof(InVector[0]);
    BubleSort(InVector, n);
    print_array(InVector, n);
    printf("\n");
    return 0;
}
