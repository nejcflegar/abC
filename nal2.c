#include <stdio.h>
 
int getFull(char[]);
float getElse(char[]);
int eksponent(char[]);
void izpis(double, int);

int ind = -1;

int main(){
    float getElse(char[]);
    char a[] = "123.45e+6";
    double st;
    int eksp;

    st = getFull(a);
    st = st + getElse(a);
    eksp = eksponent(a);

    izpis(st,eksp);


    return 0;
}

int getFull(char a[]){
    extern int ind;
    int stevka = 0;

    for(ind = 0; a[ind] != '.' && a[ind] != '\0'; ind++){
        stevka = stevka * 10;
        stevka = stevka + a[ind] - '0';
    }

    return stevka;
}

float getElse(char a[]){
    extern int ind;
    float stevka = 0;
    float hm = 0.1;


    for(ind++;a[ind] != 'e' && a[ind] != '\n';hm = hm/10, ind++){
        stevka = stevka + (a[ind] - '0') * hm;
    }

    return stevka;
}

int eksponent(char a[]){
    int eksp, predznak;
    //printf("%c\n",a[ind]);
    if(a[ind] != 'e'){
        return 0;
    }

    if(a[++ind] == '-'){
        predznak = -1;
    }else{
        predznak = 1;
    }


    eksp = 0;
    for(ind++; a[ind] != '\0'; ind++){
        eksp = eksp * 10 + (a[ind] - '0'); 
    } 

    return eksp * predznak;
}

void izpis(double st, int ek){
   printf("%lf    %d\n",st,ek);
   if(ek < 0){
       ek = ek * -1;

       for(int i = 0; i < ek; i++){
           st = st/10;
       }
   }else{
       for(int i = 0; i < ek; i++){
           st = st * 10;
       }
   }

   printf("%lf\n",st);
}
















