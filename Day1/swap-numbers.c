#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two numbers:");
    scanf("%d %d",&a,&b);
    printf("The original number: %d %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped number:%d %d\n",a,b);
    return 0;
}