#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    int res=a+b;
    cout<<" the sum of "<<a<<" and "<<b<< " is " << res <<endl;
    ofstream fout("5_filehandling.txt");
    fout<<res<<endl;
    fout.close();
    ifstream fin("5_filehandling.txt");
    string sentence;
    while(getline(fin,sentence))
    {
        cout<<sentence<<endl;
    } 
    fin.close();
}