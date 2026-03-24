#include <stdio.h>

int main(int argc, char** argv){
    int i;
    while(--argc > 0){
        printf("%s ", *++argv);
    }
    printf("\n");
    return 0;
}
 
/*
int main(int argc, char *argv[]){
    int i;
    printf("%d    %s\n",argc,argv[0]);
    for(i = 1; i < argc; i++){
        printf("%s%s",argv[i],(i < argc -1)? " " : "");
    }
    printf("\n");
    return 0;
}
*/
