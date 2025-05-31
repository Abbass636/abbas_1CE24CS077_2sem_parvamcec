#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    int age;
    int weight;
    public:
        Person(string name, int age , int weight): name(name),age(age), weight(weight)
        {
            cout << "Person Constructor" << endl;
        }
};
class Employee : public Person
{
protected:
    int emp_id;
public:
    Employee(string name, int age , int weight, int emp_id): Person(name, age, weight), emp_id(emp_id)
    {
        cout<<"Employee Constructor" << endl;
    }
};
class Manager :public Employee
{
    int salary;
    public:
    Manager(string name, int age , int weight, int emp_id, int salary ) : Employee (name , age , weight, emp_id), salary(salary)
    {
        cout << "Manager Constructor" << endl;
    }
    void display()
    {
        cout << "Manager details:" << endl;
        cout << "Manager name :" << name << endl;
        cout << "Manager Age :" << age << endl;
        cout << "Manager weight :" << weight << endl;
        cout << "Empl9oyee  id :" << emp_id << endl;
        cout << "Manager salary :" << salary << endl;
    }
};
int main()
{

    Manager m1("Abbas",19, 55,636,20000);
    m1.display();
}