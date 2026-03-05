#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int toDigit(char);
int power(int);

int main(){
    char hex[] = "0x11";
    int length = 0;
    bool stej = false;

    for(int i = 0; hex[i] != '\0'; i++){

        if(stej){
            length++;
        }

        if(isalpha(hex[i]) != 0){
            hex[i] = tolower(hex[i]);
            if(hex[i] == 'x'){
                stej = true;
            }
        }
    }

        //printf("%c  %d \n",hex[i],length);

        int curr;
        int vsota = 0;
        for(int i = 2; i < (length+2); i++){
            if(!isdigit(hex[i])){
                curr = toDigit(hex[i]);
            }else{
                curr = hex[i] - '0';
            }

            if((length + 2 - 1 - i ) == 0){
                vsota = vsota + curr;
            }else{
                vsota = vsota + power(length + 2 - 1 - i)*curr;
            }
        }

    printf("%d\n", vsota);

    return 0;
}

int toDigit(char c){
    return c - 'a' + 10;
}

int power(int k){
    int yep = 1;
    while(k != 0){
        yep = yep * 16;
        k--;
    }
    return yep;
}




