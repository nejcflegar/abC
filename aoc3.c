#include <stdio.h>
#include <stdlib.h>
 
int get();

int main(){
    int sum = 0;
    int curr;
    while(curr = get()){
        sum += curr;
    }

    return 0;
}

int get(){
    int curr, indeks = 0;
    int* ptr = (int*)malloc(sizeof(int) * 105);
    while((curr = getchar()) != EOF && curr != '\n'){
        ptr[indeks++] = (curr -'0');
        printf("%d  ",ptr[indeks]);
    }

}
