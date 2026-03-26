#include <stdio.h>
char str[100];
int vsota = 50;
int cifra(void);
int spremeni(int);

int main(){
    int st;
    int count = 0;

    while(scanf("%s",str) > 0){
        st = cifra();
        count = count + spremeni(st);
    }
    printf("%d\n",count);

    return 0;
}

int cifra(){
    int predznak;
    extern char str[];
    if(str[0] == 'L'){
        predznak = -1;
    }else{
        predznak = 1;
    }

    int cifra = 0;

    for(int i = 1; str[i] != '\0'; i++){
        cifra = cifra * 10 + (str[i] - '0');
    }

    return cifra * predznak;
}

int spremeni(int st){
    int count = 0;
    printf("vsota: %d st: %d in se skp: ",vsota,st);
    if(st + vsota > 99){
        if(vsota != 0)count++;
        vsota = vsota + st - 100;
        while(vsota >= 100){
            vsota -= 100;
            count++;
        }
    }else if(st + vsota < 0){
        if(vsota != 0)count++;
        vsota = vsota + st + 100; 
        while(vsota <= 0){
            vsota += 100;
            count++;
            //printf("v: %d   %d\n",vsota, count);
        }
    }else{
        vsota = vsota + st;
        if(vsota == 0){count++;}
    }
    if(vsota == 100){
        vsota = 0;
    }
    printf("  %d\n",count);
    return count;

}
