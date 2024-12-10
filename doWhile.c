#include <stdio.h>


int main(){
    int i,j;

    for(i-1;i<=2;++i){
        printf("outer loop: %d\n");

        for(j=1;j<=3;++j){
            printf("innerloop :%d\n",j);
        }
    }

    return 0;
}


