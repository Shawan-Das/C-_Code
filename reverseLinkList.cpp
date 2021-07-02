#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
}; Node* head = NULL; Node* indicator=NULL; Node* currentNode=NULL; Node* previousNode=NULL;

void insertFirst(int value){
    Node* singleNode = new Node;

    singleNode->data = value;
    singleNode->next = NULL;
    Node* temp = head;
    head = singleNode;
    head->next = temp;
}
void insertLast(int value){
    Node* singleNode = new Node;

    singleNode->data = value;
    singleNode->next = NULL;

    Node* temp = head;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = singleNode;
//    tempHead=singleNode;
}
void insertMid(int position, int value){
    Node* singleNode = new Node;
     Node* temp =head;

    for(int i=1; i<position-1;i++) temp=temp->next;
    indicator = temp->next;

    singleNode->data = value;
    singleNode->next = indicator;
    temp->next = singleNode;
}
void deleteFirst(){
    Node* temp = head;
    temp = temp->next;
    head = temp;
}
void deleteMid(int position){
    Node* temp =head;

    for(int i=1;i<position-1;i++) temp = temp->next;

       indicator=(temp->next)->next;
       temp->next= indicator;
}
void deleteLast(){
    Node* temp = head; int position =1;
    while(temp->next!=NULL){
     temp = temp->next;
     position++;}
     deleteMid(position);
}
void printList(){
    Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    } printf("\n");
}
void fun1(struct Node* head)
{
if(head == NULL)
return;
cout << head->data << " ";
fun1(head->next);
cout << head->data << " ";
}
int sizeofList( )
{
    Node *temp=head;
    int counter=0;
    while(temp != NULL){
            counter++;
    temp = temp->next;
    }
    return counter;
}
 void reverseLinkList()
{
        previousNode = head;
        currentNode = head->next;
        head = head->next;
        previousNode->next = NULL;

        while(head != NULL)
        {
            head = head->next;
            currentNode->next = previousNode;
            previousNode = currentNode;
            currentNode = head;
        }

        head = previousNode;
}

int main()
{
    insertFirst(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertMid(3,25);
    insertMid(5,35);
    printList();
//     cout<<endl<<sizeofList()<<endl<<tempHead->data<<endl;
     reverseLinkList();
     printList();
    return 0;
}

