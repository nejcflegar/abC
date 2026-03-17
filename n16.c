#include <stdio.h>
 
void subArray(int*);
void subArray2(int*);

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    subArray2(&array[6]);
    return 0;
}

void subArray(int *ptr){
    for(int i = 0; ptr[i] > 1; i--){
        printf("Element na indeksu: %d je %d\n", i, ptr[i]);
    }
}

void subArray2(int *ptr){
    for(int i = 0; *(ptr + i) > 1; i--){
        printf("Element na indeksu: %d je %d\n", i,*(ptr + i));
    }
}
