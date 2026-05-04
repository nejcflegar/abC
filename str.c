#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    int num;
    struct _node* next;
} node;

void add(int a,node*);
void izpis1(node*);
node* deleteFirst(node*);
void deleteLast(node*);
void insert(node*,int,int);
node* reverse(node*);
void addEnd(node*,node*);

int main(){
    node* head = (node*)malloc(sizeof(node));
    head->num = 10;
    add(4,head);
    add(5,head);
    add(6,head);
    add(7,head);
    head = reverse(head);
    izpis1(head);


    return 0;
}

void add(int a, node* head){
    if(head->next == NULL){
        node* temp = (node*)malloc(sizeof(node));
        temp->num = a;
        head->next = temp;
        return;
    }

    add(a,head->next);
}

void izpis1(node* head){
    if(head == NULL){
        printf("\n");
        return;
    }
    printf("%d ",head->num);
    izpis1(head->next);
}

node* deleteFirst(node* head){
    return head->next;
}

void deleteLast(node* head){
    if(head->next->next == NULL){
        head->next = NULL;
        return;
    }
    deleteLast(head->next);
}

void insert(node* head, int ind, int num){
    if(ind == 1){
        node* temp = (node*)malloc(sizeof(node));
        temp->num=num;
        node* temp2 = head->next;
        head->next = temp;
        temp->next = temp2;
        return;
    }

    insert(head->next,--ind,num);
}

node* reverse(node* head){
    if(head->next == NULL){
        printf("tukaj\n");
        return head;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp = reverse(head->next);
    addEnd(temp,head);
    return temp;
}

void addEnd(node* head, node* a){
    if(head->next == NULL){
        head->next = a;
        return;
    }
    addEnd(head->next,a);
}
