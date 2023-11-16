#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;

};
void traversal(struct Node* ptr){
    while(ptr!=NULL){
    printf("%d\n",ptr->data);
    ptr=ptr->next;
    }
}
struct Node * insertatstart(struct Node *head, int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node * insertinbetween(struct Node *head, int data,int index){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * cm=head;
    int i=0;
    while(i!=index-1){
        cm=cm->next;
        i++;
    }
    ptr->data=data;
    ptr->next=cm->next;
    cm->next=ptr;
    return head;
}
struct Node * insertatEnd(struct Node *head, int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *l=head;
    // int i=0;
    while(l->next!=NULL){
        l=l->next;
        // i++;
    }
    l->next=ptr;
    ptr->next=NULL;
    return head;
}
struct Node * insertatindex(struct Node * head,int data,struct Node * index){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=index->next;
    index->next=ptr;
    return head;
}

int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=5;
    second->next=third;

    third->data=56;
    third->next=NULL;
    printf("\nbefore insertion of element\n");
    traversal(head);
    // head=insertatstart(head,57);
    printf("\nafter insertionof the element\n");
    // head=insertinbetween(head,57,1);
    // head=insertatEnd(head,500);
    head=insertatindex(head,500,second);
    traversal(head);
    return 0;


}