#include<stdio.h>
#include<stdbool.h>

#define CAPACITY 5
int ourQueue[CAPACITY];
int front = 0,rear = -1,totalItem = 0;

bool isFull()
{
    if(totalItem==CAPACITY)
    {
        return true;
    }
    return false;
}

bool isEmpty()
{
    if(totalItem==0)
    {
        return true;
    }
    return false;
}

void enqueue(int item)
{
    if(isFull())
    {
        printf("Sorry, the Queue is full\n");
        return;
    }
    rear = (rear+1) %CAPACITY; ///circular queue er concept onujayi
    ourQueue[rear]=item;
    totalItem++;
}


int dequeue()
{
    if(isEmpty())
    {
        printf("Sorry, the queue is empty\n");
        return-1;
    }
    int frontItem = ourQueue[front];
    ourQueue[front] = -1;
    front = (front +1)%CAPACITY; ///front agate agate eksmy jkn rear er kache jabe ebong sese r jayga thakbe na tkn abr ghure smne jabe tai ei method
    totalItem--; ///delete korle to total ja item chilo ta ek kore kore kombei
    return frontItem;
}

void printQueue ()/// Item add hocche kina seta bujhar jonno
{
    printf("Queue: \n");
    for(int i =0;i<CAPACITY;i++)
    {
        printf("%d ",ourQueue[i]);
    }

    printf("\n ");

}

int main()
{
    printf("\n***\nLet's Implement Our Queue\n\n");
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printQueue();
    enqueue(50);
    printQueue();
    enqueue(60);

    printf("Deque: %d\n",dequeue());
    printQueue();

    enqueue(60);
    printQueue();

    return 0;
}
