#include<stdio.h>
int main(){
    int num;
    printf("enter any number:");
    scanf("%d",&num);
    if(num%2==0){
        printf("%d is an even number",num);
    }
    else{
        printf("%d is an odd number",num);
    }
    return 0;
}