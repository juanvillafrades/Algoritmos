#include<stdio.h>
#define SIZE 5
int values[SIZE], front = -1, rear = -1;

void enQueue(int value ){
    if(rear == SIZE-1)
        printf("nuestro Queue esta lleno\n");
    else {
        if(front == -1)
            front = 0;
        rear++;
        values[rear] = value;
        printf("se inserto el valor %d correctamente\n", value);
    }
}

void deQueue(){
    if(front == -1)
        printf("Nuestro Queue esta vacio\n");
    else{
          printf("Se elimino el valor %d\n", values[front]);
          for(int i=0; i<rear; i++){
              values[i]=values[i+1];
          }
          rear--;
          //front++;
          if(front > rear)
            front = rear = -1;
    }
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    enQueue(10);
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);
    deQueue();
    deQueue();
    return 0;
}

