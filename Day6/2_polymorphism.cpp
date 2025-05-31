#include<iostream>
using namespace std;
class Sum
{
public:
    int add(int a, int b)
    {
        return a + b;   
    }
    int add(int a , int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Sum s1;
    int res = s1.add(10,20);
    cout << "The result:" <<res<<endl;
    cout << "the result is:" << s1.add(11111111,2222222,3333333)<<endl;
    
}