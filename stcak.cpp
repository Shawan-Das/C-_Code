#include<stdio.h>
using namespace std;
int Max_Size = 5;
int stack_array[5];
int top = -1;
//1) Push, 2) Pop, 3)Top, 4)isFull, 5)isEmpty

int isEmpty(){
if(top==-1) return 1;
else return 0;
}

int isFull(){
if(top== Max_Size) return 1;
else return 0;
}

void Top(){
    if(isEmpty()) printf("Empty Stack\n");
else printf("Top Element of Stack is %d\n",stack_array[top]);
}

void Pop(){
if(isEmpty())printf("Empty Stack\n");
else{
    int data = stack_array[top--];
    printf("Popped Element is %d\n",data);
  }
}

void Push(int data){
if(isFull()) printf("Stack is Full\n");
else stack_array[++top] = data;
}

int main()
{

}
