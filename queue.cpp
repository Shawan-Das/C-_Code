#include<bits/stdc++.h>
using namespace std;
// *Enqueue *Dequeue *Front *isFull *isEmpty
int Queue[6], queueSize = 6, Front = -1, Rear = -1;

int isFull(){
    if(Rear==queueSize-1) return 1;
    else return 0;
}
int isEmpty(){
    if(Front==-1 || Rear<Front) return 1;
    else return 0;
}
void Enqueue(int value){
    if(isFull()){
        printf("Queue Overflow !! \n");
    }else{
        Rear++;
        Queue[Rear]=value;
        printf("Enqueued Value is %d\n",Queue[Rear]);
        if(Front==-1) Front = 0;
    }
}
void Dequeue(){
    if(isEmpty()) printf("Queue Underflow !!\n");
        else{
        printf("Dequeued Value is %d\n",Queue[Front]);
        Front++;
    }
}
void FrontValue(){
    if(isEmpty()) printf("No value\n");
    printf("Front Value is %d\n",Queue[Front]);
}
int main()
{
    Enqueue(10);
    getchar();
    Enqueue(20);
    getchar();
    Enqueue(30);
    getchar();
    Enqueue(40);
    getchar();
    Enqueue(50);
    getchar();
    Enqueue(60);
    getchar();
    Dequeue();
    getchar();
    FrontValue();
    getchar();
    Dequeue();
    getchar();
    Enqueue(20);
    getchar();
    FrontValue();
    getchar();
    Dequeue();
    getchar();
    FrontValue();
    getchar();
    Dequeue();


    return 0;
}
