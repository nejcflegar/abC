#include <stdio.h>

int main(){
    double count;

    for(count = 0; EOF != getchar(); ++count);

    printf("%.0f\n",count);

    return 0;
}
