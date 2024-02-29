#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    a=0;b=1;
    int sum=0;
    for(int i=1;i<pow(10,6);i++){
c=a+b;
if(c%2==0)
sum+=c;
a=b;
b=c;
    }
printf("the sum of even fibonacci terms under milion is : %d",sum);
}