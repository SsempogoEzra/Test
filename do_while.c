#include <stdio.h>
//all multiples of 3 starting from 3 to 15
 /*loop 3 to 15 
    do print i*3
        
 */
int main(){
int multiple,count;
/*count=3;
multiple=1;
do
 {
    multiple=3*count;
    printf("3 times %d is %d \n",count,multiple);
    count++;
 } while (count<15);

*/
/*for (int i=3;i<=15;i++){
   multiple =3*i;
   printf("3 X %d = %d \n",i,multiple );
}
*/

//multiples of 3 between 0-10 and 12-18
printf("From 0 to 10\n");

for (int i=0;i<=10;i++){
   multiple =3*i;
   printf("3 X %d = %d \n",i,multiple );
}
printf("Now from 10 to 20 \n");

for (int i=10;i<=20;i++){
   multiple =3*i;
   printf("3 X %d = %d \n",i,multiple );
}

 
    return 0;
}