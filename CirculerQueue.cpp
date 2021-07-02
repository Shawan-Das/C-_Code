#include<bits/stdc++.h>
using namespace std;
/*
    Queue -> 1) Enqueue, 2) Dequeue, 3) Front, 4) isFull, 5)isEmpty
*/
int CQueue[6], size_queue=6, Front = -1, Rear = -1;
int isFull(){
    if ((Front==0 && Rear == size_queue-1) || (Rear+1 == Front)){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(){
    if(Front==-1){
        return 1;
    }else{
        return 0;
    }
}

void CQEnqueue(int value){
    if(isFull()){
        printf("Queue Overflow\n");
    }else{
        if(Front == -1){
            Front = 0;
            Rear = 0;
        }else{
            if(Rear == size_queue-1){
                Rear = 0;
            }else{
                Rear++;
            }
        }
        CQueue[Rear]=value;
        printf("Enqueued Value is %d\n",value);
    }
}

void CQDequeue(){
    if(isEmpty()){
        printf("Queue Underflow\n");
    }else{
        printf("Dequeued Value is %d\n", CQueue[Front]);
        if(Front == Rear ){
            Front = -1;
            Rear = -1;
        }else{
            if(Front == size_queue-1){
                Front = 0;
            }else{
                Front++;
            }
        }
    }
}
void FrontValue(){
    if(isEmpty()){
        printf("Nothing TO Show\n");
    }else{
        printf("Front Value is %d\n",CQueue[Front]);
    }
}
int main(){
    CQEnqueue(10);
    CQEnqueue(20);
    CQEnqueue(30);
    CQEnqueue(40);
    CQEnqueue(50);
    CQEnqueue(60);
    CQEnqueue(70); // Should Give Overflow
    CQDequeue();
    CQEnqueue(70);

}

