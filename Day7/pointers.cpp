#include<iostream>
using namespace std;
int main()
{
    //variable
    int a =10;
    cout <<"Address of a:" << &a << endl;
    int*ptr = &a;
    cout << "Ptr value:" << ptr << endl;
    cout << "Ptr Address:" << &ptr << endl;
    cout << "Value of a using a:" << a << endl;
    cout << "Value of a using ptr:" << *ptr << endl;
    cout << "Value of a:" << *(&a) << endl;
    cout << "Value of a:" << *(*(&ptr)) << endl;    
    cout << "Value of a:" << *(&(*ptr)) << endl;    
    return 0;
}
