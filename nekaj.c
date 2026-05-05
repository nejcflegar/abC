#include <stdio.h>
#include <stdlib.h>

typedef struct _a{
    int num;
} node;

int main(){
    node* p = (node*)malloc(sizeof(node));
    p->num = 10;
    printf("%d\n",p->num);
    (*p).num = 20;
    printf("%d\n",p->num);
}
