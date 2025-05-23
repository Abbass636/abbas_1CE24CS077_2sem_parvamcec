#include<stdio.h>
int main()
{
    int num=0,rev=0,org=0,digit=0;
    printf("enter a number:");
    scanf("%d",&num);
    org=num;
    printf("enter the original number: %d\n",org);
    while(num>0){
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("enter the reverse number: %d\n",rev);
    if(org==rev){
        printf("the given number is palindrome\n");
    }else{
        printf("the given number is not a palindrome\n");
    }
    return 0;
}