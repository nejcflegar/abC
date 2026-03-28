#include <stdio.h>
#include <stdlib.h>
 
int readLine(int*);
int get(int*,int);
long get2(int*,long);

int main(){
    long sum = 0, len = 0;
    int *ptr = (int*)malloc(105*sizeof(int));

    while((len = readLine(ptr)) != 0){
        sum += get2(ptr,len);
    }

    printf("%ld\n",sum);
    return 0;
}

int readLine(int *ptr){
    int curr, len;
    len = 0;

    while((curr = getchar()) != EOF && curr != '\n'){
        *ptr = (curr - '0');
        printf("%d",*ptr);
        len++;
        ptr++;
    }
    printf("\n");
    return (curr == EOF)? 0 : len;
}

int get(int *ptr, int len){
    int max1 = len;
    int max2 = len;
    ptr[len] = -1;

    for(int i = 0; i < len; i++){
        if(ptr[max1] < ptr[i] && i < len-1 ){
            max1 = i;
            max2 = len;
            continue;
        }
        if(ptr[max2] < ptr[i] && max1 < i){
            max2 = i;
        }
    }

    int value = ptr[max1]*10+ptr[max2];
    printf("max1: %d    max2: %d    %d\n",ptr[max1],ptr[max2],value);
    return value;
}

long get2(int *ptr, long len){
    ptr[len] = -1;
    int max[12];
    max[0] = len;
    for(int i = 0; i < len; i++){
        if(ptr[max[0]] < ptr[i] && len - i > 10 ){
            max[0] = i;
        }
    }

    printf("at 0  value: %d  indeks: %d\n",ptr[max[0]], max[0]);
    for(int i = 1; i < 12; i++){
        max[i] = len;
        for(int j = max[i-1]+1; j < len; j++){
            //printf("i: %d  j: %d  p[m[j]]: %d p[j]: %d\n",i,j,ptr[max[i]],ptr[j]);
            if(ptr[max[i]] < ptr[j] && len - j > 11 - i){
                max[i] = j;
            }
        }
        printf("at %d  value: %d  indeks: %d\n",i,ptr[max[i]], max[i]);
    }

    long sum = 0;
    for(int i = 0; i < 12; i++){
        sum = sum * 10 + ptr[max[i]];
    }
    printf("%ld\n",sum);
    return sum;
}
