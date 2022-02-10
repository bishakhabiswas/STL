#include<stdio.h>
#define CAPACITY 3
int stack [CAPACITY];
int top = -1;
void push(int x)
{
    if(top<CAPACITY-1)
    {
        top=top+1;
        stack[top]=x;
        printf("Succesfully added item:%d\n",x);
    }

    else{
        printf("Exception!No spaces\n");
    }
}

int main()
{
    printf("Implementation my stack in c\n");
    push(10);
     push(20);
     push(30);
      push(40);

      return 0;


}

