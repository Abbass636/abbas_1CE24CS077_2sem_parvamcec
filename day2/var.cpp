#include<iostream>
using namespace std;
int main(){
    /*
    syntax:
    ========
       data_type variable name;  --> variable declaration
       variable_name = value; --> assign value to a variable
           or
       data_type variable_name=value-->declaration and assigning
    */
    int count;
    count = 40;
    //float marks;
    //marks=100;
    float marks = 100;
    char gender = 'M';
    bool var_name = true;
    string name = "abbas";

    cout << "int:" << count << endl;
    cout << "float:" << marks << endl;
    cout << "char:" << gender << endl;
    cout << "boolean:" << var_name << endl;
    cout << "string:" << name << endl;

}