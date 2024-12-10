#include <stdio.h>

int main(){
    int score=71;
    if(score>=80){
        printf("The grade is high distiction");
    }else if(score>=70 && score<=80){
        printf("The grade is pass");
    }else if(score>80){
        printf("Something here too!");
    }else{
        printf("this too"); 
    }

    return 0;
}