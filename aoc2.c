#include <stdio.h>
#include <ctype.h>

int readNum();
void invalid();
int checkSize(long);
int checkInvalid(long);
void razkosajInPreglej(long);
int checkKos(long, long,long);
int specialCheck(long);

long num1;
long num2;
long sum = 0;

int main(){
    extern long num1;
    extern long num1;

    int check = 1;

    while(check != -1){
        check = readNum();
        invalid();
    }
    printf("%ld\n",sum);
}


int readNum(){
    extern long num1;
    extern long num1;

    int curr;
    while((curr = getchar()) != '-'){
        num1 = num1 * 10 + (curr - '0');
    }
    while((curr = getchar()) != ',' && curr != EOF){
        if(isdigit(curr)){
            num2 = num2 * 10 + (curr - '0');
        }
    }

    return (curr == EOF)? -1 : 1;
}

void invalid(){
    extern long num1;
    extern long num2;


    for(long a = num1; a <= num2; a++){
        /*if(checkSize(a) && checkInvalid(a)){
            printf("sum++ pri %ld\n",a);
            sum += a;
        }else{
            continue;
        }                                   //TOLE JE ZA PRVI DEL NALOGE :c
        */
        razkosajInPreglej(a);
    }


    num1 = 0;
    num2 = 0;
}

void razkosajInPreglej(long a){
    long size = 1;
    long quadsiz = 0;
    for(long b = a; b != 0; size = size*10,quadsiz++, b = b / 10);
    long halfsize = 1;
    for(quadsiz = quadsiz/2; quadsiz != 0;halfsize = halfsize*10,quadsiz--);

    for(int i = 10; i <= halfsize; i = i * 10){
        if(checkKos(i, a%i, a)){
            sum += a;
            printf("tole je prau baje: %ld\n",a);
            break;
        }
    }
}

int checkKos(long size, long del, long a){
    //printf("JOVO NA NOVO\n");
    long b = a;
    while(a != 0){
        printf("a = %ld  size  = %ld del = %ld pa se drug del = %ld\n",a,size,del,a%size);
        if(del == a%size){
            a = a/size;
            printf("TRUE\n");
        }else{
            printf("FALSE\n");
            break;
        }
    }
    if(a == 0){
        a = specialCheck(b);
    }
    return !a? 1 : 0;
}

int specialCheck(long b){
    int size = 0;
    for(long c = b; c != 0; c = c/10, size++);
    printf("SIZE JE ENAKO: %d\n",size);
    if(size%2 == 0){
        return 0;
    }

    int c = 0;
    for(int i = 0; i < size; i++){
        printf("pa da vidm: %d\n",b%10);
        if(i%2 == 1 && b%10 != 0){
            printf("c = 1\n");
            c = 1;
        }
        b = b/10;
    }

    return c? 0:1;
}


int checkSize(long a){
    int size = 0;

    for(; a != 0; size++, a = a/10);

    return (size%2 == 0)? 1 : 0;
}

int checkInvalid(long a){
    long b = a;
    int size = 0;

    for(; b != 0; b = b/10, size++);

    size = size/2;

    long c = 0;
    long d = 0;

    for(int i = 0; i < size; i++){
        c = c * 10 + a % 10;
        a = a / 10;
    }

    for(int i = 0; i < size; i++){
        d = d * 10 + a % 10;
        a = a / 10;
    }

    printf("%ld    %ld\n",c,d);
    return (c == d)? 1 : 0;
}
