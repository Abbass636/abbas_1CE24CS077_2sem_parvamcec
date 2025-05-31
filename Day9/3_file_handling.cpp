#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream hello;
    hello.open("3_filehandling.txt");
    hello << "Hi this is abbas here\n i am 19 years old";
    hello.close();
    cout << "File is closed" << endl;
    ifstream fin("3_filehandling.txt"); 
    string line;
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();
}
