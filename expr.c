#include <stdio.h>
#include <ctype.h>

int stack[100];
int operation[100];
void push(int);
int pop(void);
int solve(int,int,char);
void save(int);
int get(void);
int stPtr = 0;
int opPtr = 0;
 
int main(int argc, char *argv[]){
    if(argc == 1){
        printf("No Input");
    }

    while(--argc > 0){
        argv++;
        if(isdigit(*argv[0])){
            push(*argv[0]-'0');
        }else{
            save(*argv[0]);
        }
    }

    int a = pop();
    int b = pop();
    int op = get();
    int count = solve(a,b,op);
    count = solve(count,pop(),get());

    printf("%d\n",count);

    return 0;
}

void push(int a){
    stack[stPtr++] = a;
}

int pop(void){
    return stack[--stPtr];
}

void save(int a){
    operation[opPtr++] = a;
}

int get(void){
    int a = operation[0];
    for(int i = 1; i < opPtr; i++){
        operation[i - 1] = operation[i];
    }

    opPtr--;

    return a;
}

int solve(int a, int b, char c){
    switch(c){
        case '+': return a + b;
        case '-': return a + b;
    }
}
