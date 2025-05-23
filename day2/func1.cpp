/*
to declare a function in c/c++:
==============================
1. function declaration/prototypye - return_functiob(...parameters);
2. function definition 
3. function call
*/
#include<iostream>
using namespace std;
// function declaration
int add(int num1, int num2);
int main()
{
    //function call
    int a = 80;
    int b = 30;
    int res = add(a,b);
    cout << "the result1 is:" << res << endl;
    int c = 20;
    int d = 40;
    int res1 = add(c,d);
    cout << "the result2 is: " << res1 << endl;
}
//function definition
int add(int num1, int num2)
{
    int sum = num1 +num2;
    return sum;
}