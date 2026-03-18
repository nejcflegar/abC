#include <stdio.h>
 
void strct(char*, char*);
int strend(char*, char*);

int main(){
    char str[1000] = "zacetekzacetekzacetekzacetea";
    //strct(str,"konec");

    int a = strend(str,"tek");
    printf("%d\n",a);
    return 0;
}

void strct(char *s, char *t){
    int i, j;
    for(i = 0; *(s+i) != '\0'; i++);
    for(j = 0; *(t+j) != '\0'; i++, j++){
        *(s+i) = *(t+j);
    }

}


int strend(char *s, char *t){
    int j, i;
    for(j = i = 0; *(s+i) != '\0'; i++){
        if(*(t+j) == '\0'){
            j = 0;
        }

        if(*(t+j) == *(s+i)){
            j++;
        }else{
            j = 0;
        }
    }

    if(*(t+j) == *(s+i)){
        return 1;
    }else{
        return 0;
    }

}
