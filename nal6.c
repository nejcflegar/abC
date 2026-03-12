#include <stdio.h>
 
void izpis();

int main(){
    
    izpis();
    izpis();
    izpis();
    izpis();
    izpis();

    return 0;
}

void izpis(){
    static int b = 0;
    b++;
    printf("%d\n",b);
}
