#include<iostream>
using  namespace  std;
int main()
{
    int arr[8] = { 1, 2,13, 5, 6, 17, 8};
    int *ptr = arr;
    int evencount = 0, oddcount = 0;
    for (int i = 0; i < 7; i++)
    {
        if ((i[ptr] % 2) == 0 )
        {
            evencount++; //evencount = evencount+1;
        }
        else
        {
            oddcount++;
        }
    }
    cout << "Evencount:" << evencount << endl;
    cout << "oddcount:" << oddcount << endl;   
}