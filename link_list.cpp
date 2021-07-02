#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* next;
};

int main()
{
    /// Creating First Node
    Node* Firstnode = new Node;
int number_of_data,a;
    scanf("%d",&number_of_data);  scanf("%d",&a);
    Firstnode->data = a;
    Firstnode->next = NULL;

    Node* head, *indicator;
    head = Firstnode;

    Node* temp = head;

    for(int i=1;i<=number_of_data-1;i++)
    {
        int value;
        scanf("%d",&value);

        Node* node_add = new Node;

        node_add->data = value;
        node_add->next = NULL;

        temp->next = node_add;
        temp = temp->next;
    }
///insert
    int position,value;
    printf("position: "); scanf("%d",&position);
    printf("value: ");    scanf("%d",&value);
    temp = head;
    if(position == 1){
            Node* addNode = new Node;
            addNode->data = value;
            addNode->next = Firstnode;
            head = addNode;
    }   else{
         for(int i=1;i<position-1;i++) temp = temp->next;
           indicator= temp->next;

     Node* addNode = new Node;
    addNode->data = value;  temp->next = addNode;
    addNode->next = indicator;
    //temp->next = addNode;
    }
         temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
                   printf("\n");
///delete
       printf("position: ");  scanf("%d",&position);
       temp=head;
       if(position == 1) head=temp->next;
       else{
        for(int i=1;i<position-1;i++) temp = temp->next;

       indicator=temp->next;
       temp->next= indicator->next;
       }

     temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }

    return 0;
}
    /*Node* newNode = new Node;
    newNode->data = 40;
    newNode->next = NULL;

    Node* temp = head;
    temp->next = newNode;

    Node* thirdNode= new Node;
    thirdNode->data = 50;
    thirdNode->next = NULL;

    Node *temp = head;
    temp = temp->next;


    Node* fourthNode= new Node;
    fourthNode->data = 50;
    fourthNode->next = NULL;

    Node *temp = head;
    temp = temp->next;*/

