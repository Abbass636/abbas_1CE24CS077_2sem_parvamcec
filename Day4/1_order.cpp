#include<iostream>
using namespace std;
class Student
{
    private:
    string name ;
    public:
    //constructor
    Student(string name)
    {
        this -> name=name;
        cout<<"constructor called for:" << this-> name <<endl;
    }
    ~Student()
    {
        cout<< "destructor is called:" << name << endl; 
    }
};
int main()
{
    //object 
    Student s1("abbas");
    Student s2("rohit");
    Student s3("harsha");
    return 0;
}