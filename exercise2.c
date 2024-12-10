#include <stdio.h>

int name(){
    
    printf("My name is S.Ezra \n");
    return 0;
}

int adder(){
    int a=2;
    int b=3;
    int c= a+b;
    printf("The sum of %d and %d is %d",a,b,c);

}

int main(){
    name();
    double doubled=adder();
    //printf("The sum of two numbers 2 and 3 is %d",adder());
    return 0;
}