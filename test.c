#include <stdio.h>
/*
set counter to 0
    multiply 3 against its self once
    then for counter++ self multiplication of 3 by value of counter++ 
*/
int main(){
    int counter,power,stp1,stp2;
    stp1=1;
    stp2=0;
    power=3;
    counter=0;
    while(counter <5){
        while (counter>0 && stp2<counter)
        {
            power=3*power;
            stp2++;
        }
        printf("3 power %d is %d\n",stp1,power);
        stp1++;
        counter++;
    }

    return 0;
}

/*
int num1=1,num2=3,prob;
int i=1;
while(i<3){
 print
 prod=prod*num2;
 i++;
}
*/