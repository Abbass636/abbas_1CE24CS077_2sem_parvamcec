#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ofstream fout("4_file_handling.txt");
    // ofstream fout;
    // fout.open("4_file_handling.txt");
     
    fout.put('a');
    fout.close();

    ifstream fin("4_file_handling.txt");
    char v1;
    fin.get(v1);
    fin.close();
    cout << "The value is:" << v1 << endl;

}