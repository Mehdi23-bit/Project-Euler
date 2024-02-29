#include<stdio.h>
int main(){
    int sum;
    sum=0;
    for(int i=1;i<1000;i++){
        if(i%3==0 || i%5==0)
            sum+=i;
        
    }
    printf("the sum of Multiples of 3 and 5 under than 1000 is : %d",sum);
}