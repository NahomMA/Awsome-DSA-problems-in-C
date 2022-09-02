#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    struct Node* next;
    };

struct Node* head; // global variables , can be accessed anywhere 
void Insert(int x);
void Print();
int main()
{
    head=NULL; // empty list;
    printf("How many numbers?\n");

    int n,i ,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number \n");
        scanf("%d",&x);
        Insert(x);
        Print(); }
}
void Insert(int x){
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    (*temp).data=x; // possible to use tmp ->data =x;
    (*temp).next=head;
    head=temp;}

void Print(){
    struct Node* temp=head;
    printf(" The updated linked list is : ");
    while(temp != NULL){
        printf("%d  ",temp ->data );
        temp=temp->next;

    }
    printf("\n");
}