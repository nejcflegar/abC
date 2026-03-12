#include <stdio.h>
 
void reverse(char[]);

int main(){

    char str[] = "Jaka";
    reverse(str);

    printf("%s\n", str);

    return 0;
}

void reverse(char s[]){
    static int index = 0;
    static int index2 = 0;
    char c;

    if(s[index] != '\0'){
        c = s[index];
        index++;
        reverse(s);
    }else{
        return;
    }
    s[index2++] = c;
}
